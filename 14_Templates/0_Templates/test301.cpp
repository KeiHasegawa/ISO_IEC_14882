#include <stdio.h>

template<class C1> struct S1 {
  typedef typename C1::T2 CT2;
  typedef typename CT2::X T1;
};

template<class C2> struct S2 {
  struct T2 {
    typedef C2 X;
  };
};

int main()
{
  S1<S2<int> >::T1 x;
  printf("x = %d\n", x = 456);
  return 0;
}
