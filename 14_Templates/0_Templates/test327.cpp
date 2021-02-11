#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> struct S2 {
  typedef typename S1<C2>::T1 X;
  typedef typename S1<C2>::T1 Y;
  typename X::Tx a;
  typename Y::Tx b;
};

struct Y {
  typedef int Tx;
};

int main()
{
  S2<Y> sy;
  sy.a = 1234;
  sy.b = 5678;
  printf("sy.a = %d, sy.b = %d\n", sy.a, sy.b);
  return 0;
}
