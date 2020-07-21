#include <stdio.h>

struct T {};

template<class X, class Y, class Z> struct S {
  template<class W> static S f(W);
  S f()
  {
    printf("S::f() called\n");
    return f(T());
  }
};

template<class A, class B, class C>
  template<class D>
    S<A,B,C> S<A,B,C>::f(D)
    {
      printf("S<A,B,C>::f(D) called\n");
      return S<A,B,C>();
    }

int main()
{
  S<char,short,int> x;
  x.f();
  return 0;
}
