#include <stdio.h>

struct T {
  int m;
  T(int);
  T(const T&);
};

T f(const T& a, const T& b)
{
  return a;
}

int main()
{
  T x(1);
  T y(2);
  f(x, y);
  return 0;
}

T::T(int mm) : m(mm)
{
  printf("T::T() called. m = %d\n", m);
}

T::T(const T& src)
{
  m = src.m + 10;
  printf("T::T(const T&) called. m = %d\n", m);
}
