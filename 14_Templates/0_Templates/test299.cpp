#include <stdio.h>

template<class> struct S1;

template<class C2> struct S2 {
  typedef typename S1<C2>::T1 ST1;
  typedef typename ST1::X T2;
};

template<> struct S1<int> {
  struct T1 {
    typedef int X;
  };
};

int main()
{
  S2<int>::T2 x;
  printf("x = %d\n", x = 456);
  return 0;
}
