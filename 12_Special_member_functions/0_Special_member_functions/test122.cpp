#include <stdio.h>

struct S {
  int m;
  S()
  {
    printf("S::S() called\n");
  }
  S(const S&) = default;
  S& operator=(const S&) = default;
  ~S() = default;
};

int main()
{
  S s;
  s.m = 123;
  S s2 = s;
  printf("s2.m = %d\n", s2.m);
  S s3;
  s3 = s;
  printf("s3.m = %d\n", s3.m);
  return 0;
}
