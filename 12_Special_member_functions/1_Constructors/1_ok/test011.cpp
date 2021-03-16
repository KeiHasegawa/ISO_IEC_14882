#include <stdio.h>

struct S1 {
  S1(){}
  S1(const S1&)
  {
    printf("S1(const S1&) called\n");
  }
  S1(S1&&)
  {
    printf("S1(S1&&) called\n");
  }
};

S1 f()
{
  printf("`f' called\n");
  S1 r;
  return r;
}

struct S2 {
  S1 m;
  S2() : m(f())
  {
    printf("S2::S2() called\n");
  }
};

int main()
{
  S2 x;
  return 0;
}
