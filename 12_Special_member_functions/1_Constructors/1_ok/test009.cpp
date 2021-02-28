#include <stdio.h>

struct S {
  S();
  S(const S&);
  S& operator=(const S&);
  S& operator=(S&&);
};

S f(S a)
{
  return a;
}

int main()
{
  S x;
  S y;
  x = y;
  x = f(y);
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

S& S::operator=(const S&)
{
  printf("S::operator=(const S&) called\n");
  return *this;
}

S& S::operator=(S&&)
{
  printf("S::opertor=(S&&) called\n");
  return *this;
}
