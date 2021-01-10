#include <stdio.h>

template<class, class> struct CAT;

template<class C1> struct S {
  C1 m;
};

template<class C2> struct SS : CAT<S<C2>, S<C2>>::T {};

template<class C3> struct SSS : CAT<SS<C3>, S<C3>>::T {};

template<class A, class B> struct CAT {
  struct T {
    A a;
    B b;
  };
};

int main()
{
  SSS<int> x;
  x.a.a.m = 1;
  x.a.b.m = 2;
  x.b.m = 3;
  printf("x.a.a.m = %d, x.a.b.m = %d, x.b.m = %d\n", x.a.a.m, x.a.b.m, x.b.m);
  return 0;
}
