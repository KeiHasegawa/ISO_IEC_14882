#include <stdio.h>

template<class T> void f()
{
  T a = -3;
  printf("sizeof(a) = %d\n", sizeof(a));
  printf("a = %d\n", a);
}

void f(int);

struct X {
  int member;
};

void f(X);

int main()
{
  f<int>();
  int a;
  f(a = 1234);
  X x;
  x.member = 5678;
  f(x);
  return 0;
}

void f(int n)
{
  printf("f(int) called\n");
  printf("n = %d\n", n);
}

void f(X x)
{
  printf("f(X) called\n");
  printf("x.member = %d\n", x.member);
}

