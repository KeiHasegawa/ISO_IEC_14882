#include <stdio.h>

template<class> struct B;

template<class C> struct D : B<C>::T {
  C* p;
};

template<class C2> struct B {
  typedef C2 T;
};

struct S {
  int m;
};

int main()
{
  D<S> ds;
  ds.m  = 123;
  S s = { 456 };
  ds.p = &s;
  printf("ds.m = %d ds.p->m = %d\n", ds.m, ds.p->m);
  return 0;
}
