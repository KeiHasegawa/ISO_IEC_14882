#include <stdio.h>

int& f()
{
  static int s = 5678;
  return s;
}

int main()
{
  int& r = f();
  printf("r = %d\n", r);
  return 0;
}
