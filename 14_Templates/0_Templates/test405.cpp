#include <stdio.h>

template<class C1> struct S1 { typedef C1 T1; };

template<class C2> struct S2 {
  typedef typename S1<C2>::X::Y T2;
};

template<> struct S1<int> {
  struct X {
    typedef int Y;
  };
};

int main()
{
  S2<int>::T2 x;
  printf("x = %d\n", 2345);
  return 0;
}
