#include <stdio.h>

struct S {
  int m;
  S(int mm) : m(mm) {}
};

int main()
{
  S s(1234);
  S ss(s);
  printf("s.m = %d\n", s.m);
  printf("ss.m = %d\n", ss.m);
  return 0;
}
