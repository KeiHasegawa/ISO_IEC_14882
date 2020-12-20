#include <stdio.h>

template<class C1> struct S1 {
  C1 m1;
  typedef C1 T1;
  void f(T1 a)
  {
    m1 = a;
  }
};

template<class C2> struct S2 : S1<C2> {
  C2 m2;
};

template<class C3, class C4 = S2<C3> > struct S3 {
  C3 m3;
  C4* p;
};

int main()
{
  S3<int> s3;
  s3.m3 = 1;
  S2<int> s2;
  s2.m2 = 2;
  s2.m1 = 3;
  s3.p = &s2;
  printf("s3.m3 = %d\n", s3.m3);
  printf("s3.p->m2 = %d\n", s3.p->m2);
  printf("s3.p->m1 = %d\n", s3.p->m1);
  s3.p->f(4);
  printf("s3.m3 = %d\n", s3.m3);
  printf("s3.p->m2 = %d\n", s3.p->m2);
  printf("s3.p->m1 = %d\n", s3.p->m1);
  return 0;
}
