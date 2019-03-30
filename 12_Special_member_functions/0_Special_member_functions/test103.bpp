#include <stdio.h>

struct S {
  S()
  {
    printf("S::S() called\n");
  }
  S(int)
  {
    printf("S::S(int) called\n");
  }
  int operator+();
};

struct S2 {
  S m;
  S2();
  S2(const S& ss) : m(ss)
  {
    printf("S2::S2(const S&) called\n");
  }
  S2(int n) : m(n) {}
};

int main()
{
  S s;
  S2 s2(s);
  return 0;
}
