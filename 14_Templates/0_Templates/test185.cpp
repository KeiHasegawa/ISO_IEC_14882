#include <stdio.h>

template<class C1, class C2> struct S {
  C1 p;
  C2 v;
  void f()
  {
    *p = v;
  }
};

template<class C1, class C2> void g(S<C1, C2>& s)
{
  s.f();
}

int main()
{
  S<int*, int> x;
  int n = 1;
  x.p = &n;
  x.v = 2;
  g(x);
  printf("n = %d\n", n);
  return 0;
}
