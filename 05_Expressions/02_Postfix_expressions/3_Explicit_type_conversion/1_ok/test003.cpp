#include <stdio.h>

void f(int a)
{
  int(b());  // declaration
  int(b())+ a;  // expression statement
}

int main()
{
  f(3);
  return 0;
}

int b()
{
  printf("`b' called\n");
}
