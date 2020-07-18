#include <stdio.h>

template<class X> struct S {
  void f(int n)
  {
    printf("S::f(int) called\n");
    g(n);
  }
  template<class Y> void g(Y);
};

template<class U>
  template<class V>
    void S<U>::g(V)
    {
      printf("S::g(V) called\n");
    }

int main()
{
  S<double> x;
  x.f(3);
  return 0;
}
