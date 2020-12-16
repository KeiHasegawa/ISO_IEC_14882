#include <stdio.h>

template<class C1> struct S1 {

  static const C1 V =  ( ((C1)(-1) < 0) ? - ( ((C1)(-1) < 0) ? (((((C1)1 << ( (sizeof(C1) * 8 - ((C1)(-1) < 0) ) - 1)) - 1) << 1) + 1) : ~(C1)0) - 1 : (C1)0) ;
};

template<class C3> const C3 S1<C3>::V;

template<class C2> struct S2 : S1<typename C2::T> {};

struct X1 {
  typedef unsigned char T;
};

struct X2 {
  typedef char T;
};

struct X3 {
  typedef unsigned short int T;
};

struct X4 {
  typedef short int T;
};

int main()
{
  printf("%d\n", S2<X1>::V);
  printf("%d\n", S2<X2>::V);
  printf("%d\n", S2<X3>::V);
  printf("%d\n", S2<X4>::V);
  return 0;
}
