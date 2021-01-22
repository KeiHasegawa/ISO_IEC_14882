#include <stdio.h>

template<class> struct S1;

template<class C1> struct S2 : S1<const C1> {
  C1 m;
};

template<class  C2> struct S1 {
  C2 a;
};

template<class C1> struct S1<C1 const> {
  C1 b;
};

template<class C1, class C2 = S2<C1>> struct S3 {
  C1 c1;
  C2 c2;
};

int main()
{
  S3<int> s;
  s.c1 = 123;
  s.c2.b = 456;
  s.c2.m = 789;
  printf("s.c1 = %d, s.c2.b = %d, s.c2.m = %d\n", s.c1, s.c2.b, s.c2.m);
  return 0;
}
