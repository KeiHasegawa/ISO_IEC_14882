#include <stdio.h>

struct S {
  S();
  S(const S&);
  S(S&&);
};

S f(S s)
{
  return s;
}

int main()
{
  S s;
  f(s);
  return 0;
}

S::S()
{
  printf("S::S() called\n");
}

S::S(const S&)
{
  printf("S::S(const S&) called\n");
}

S::S(S&&)
{
  printf("S::S(S&&) called\n");
}
