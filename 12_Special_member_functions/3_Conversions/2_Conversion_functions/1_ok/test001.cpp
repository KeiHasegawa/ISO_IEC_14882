#include <stdio.h>

struct S {
  constexpr operator bool() const { return true; }
};

bool g()
{
  S s;
  return s;
}

int main()
{
  if (g())
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
