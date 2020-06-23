#include <stdio.h>

template<class C> struct S {
  void f(C* pc)
  {
    printf("*pc = %d\n", *pc);
  }
};

template<class A, class B> struct T {
  A a;
  B b;
};

template<class U, class V> struct T<U,S<V> > {
  U* c;
  V d()
  {
    return 'b';
  }
};

template<class X> struct T<X,S<X> > {
  X e[3];
};

int main()
{
  T<int,char> tic;
  printf("tic.a = %d\n", tic.a = 1);
  printf("tic.b = '%c'\n", tic.b = 'a');
  T<int,S<char> > tisc;
  int n;
  tisc.c = &n;
  printf("*tisc.c = %d\n", *tisc.c = 2);
  printf("tisc.d() : '%c'\n", tisc.d());
  T<int,S<int> > tisi;
  for ( int i = 0 ; i < 3 ; ++i )
    printf("tisi.e[%d] = %d\n", i, tisi.e[i] = i);
  S<int> si;
  si.f(&n);
  return 0;
}
