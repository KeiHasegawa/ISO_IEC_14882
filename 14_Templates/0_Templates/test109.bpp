#include <stdio.h>

template<class C1> struct S1 {
  typedef C1* T;
};

template<class C2> struct S2 {
  typedef typename S1<C2>::T T;
};

int main()
{
  int n = 0x12345678;
  S2<int>::T p = &n;
  printf("*p = 0x%x\n", *p);
  return 0;
}
