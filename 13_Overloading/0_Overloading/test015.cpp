#include <stdio.h>

void f(char* s)
{
  printf("f called with \"%s\"\n", s);
}

int main()
{
  char v[10] = "C++";
  char* p = v;
  f(v);
  f(p);
  return 0;
}
