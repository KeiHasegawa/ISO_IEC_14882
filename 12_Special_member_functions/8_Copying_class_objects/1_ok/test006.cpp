#include <stdio.h>

struct S {
  int m;
};

struct T {
  int m;
  T(const S& s) : m(s.m) {}
};

int main()
{
  S s = { 123 };
  T t = s;
  printf("t.m = %d\n", t.m);
  return 0;
}
