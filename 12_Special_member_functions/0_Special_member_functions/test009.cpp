#include <stdio.h>

struct S {
  S(int);
  S(const char*);
};

void f()
{
  S x(0);
  S y("hoge");
}

int main()
{
  f();
  return 0;
}


S::S(int n)
{
  printf("S::S(int) called with %d\n", n);
}

S::S(const char* p)
{
  printf("S::S(char*) called with \"%s\"\n", p);
}

