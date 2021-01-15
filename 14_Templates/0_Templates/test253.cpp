#include <stdio.h>

template<class = int> struct S1 {
  char* p;
};

template<typename = char> struct S2 {
  int* q;
};

int main()
{
  S1<> s1;
  char a[] = "foo";
  s1.p = &a[0];
  S2<double> s2;
  int n = 123;
  s2.q = &n;
  printf("s1.p = \"%s\", *s2.q = %d\n", s1.p, *s2.q);
  return 0;
}
