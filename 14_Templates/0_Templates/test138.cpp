#include <stdio.h>

struct T {};

template<class X, class Y, class Z> struct S {
  template<class W> static void f(W);
  void f()
  {
    printf("S<X,Y,Z>::f(W) called\n");
    return f(T());
  }
};

template<class A, class B, class C>
  template<class D>
    void S<A,B,C>::f(D)
    {
      S<A,B,C> x;
      printf("S<A,B,C>::f(D) called\n");
    }

int main()
{
  S<char,short,int> x;
  x.f();
  return 0;
}
