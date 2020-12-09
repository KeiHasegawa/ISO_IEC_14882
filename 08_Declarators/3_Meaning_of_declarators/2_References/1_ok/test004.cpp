#include <stdio.h>

typedef const char* str;

void f(const str& r)
{
  printf("%s\n", r);
}

int main()
{
  f("hoge");
  return 0;
}
