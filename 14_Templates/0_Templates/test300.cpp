#include <stdio.h>

template<class C1> struct S1 {
  struct T1 {
    typedef C1 X;
  };
};

template<class C2> struct S2 {
  typedef typename S1<C2>::T1 ST1;
  typedef typename ST1::X T2;
};

int main()
{
  S2<int>::T2 x;
  printf("x = %d\n", x = 456);
  return 0;
}
