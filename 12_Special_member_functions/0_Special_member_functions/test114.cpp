#include <stdio.h>

struct T {
  int m;
  T();
  T(int);
  T(const T&);
  ~T();
};

void f(T);

int g(T);

int main()
{
  T x;
  f(x);
  T y(20);
  g(y);
  return 0;
}

void f(T x)
{
  printf("f(T) called. x.m = %d\n", x.m);
}

int g(T x)
{
  printf("g(T) called. x.m = %d\n", x.m);
  return 3;
}

T::T() : m(10)
{
  printf("T::T() called. m = %d\n", m);
}

T::T(int mm) : m(mm)
{
  printf("T::T(int) called. m = %d\n", m);
}

T::T(const T& src)
{
  m = src.m + 20;
  printf("T::T(const T&) called. m = %d\n", m);
}

T::~T()
{
  printf("T::~T() called. m = %d\n", m);
}
