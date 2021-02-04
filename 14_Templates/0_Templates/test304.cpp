#include <stdio.h>

template<class C1> struct S1 {};

template<class C2> struct S1<C2 const> {
  C2* p;
};

template<class C3> struct S2 : S1<const C3> {};

template<class C4> struct S3 : S1<const C4> {};

int main()
{
  S2<int> s2;
  int a = 123;
  s2.p = &a;
  printf("*s2.p = %d\n", *s2.p);
  S3<char> s3;
  char c[] = "abcdef";
  s3.p = &c[0];
  printf("s3.p = \"%s\"\n", s3.p);
  return 0;
}
