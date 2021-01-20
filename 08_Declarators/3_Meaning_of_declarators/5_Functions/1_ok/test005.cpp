#include <stdio.h>

auto f() -> int;

int main()
{
  printf("f() returns %d\n", f());
  return 0;
}

int f()
{
  return 123;
}
