#include <stdio.h>

template<class C1> struct S1 {
  C1 a;
};

template<class C2> struct S2 {
  C2 b;
};

template<class C3> struct S3 {
  typedef S1<C3> S1;
  typedef S2<S1> S2;
};

int main()
{
  S3<int>::S1 x;
  printf("x.a = 0x%x\n", x.a = 0x12345678);
  S3<int>::S2 y;
  printf("y.b.a = 0x%x\n", y.b.a = 0x9abcdef0);
  return 0;
}
