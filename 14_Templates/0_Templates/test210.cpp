#include <stdio.h>

template<class C> void f(const C& v)
{
  printf("%s\n", v);
}

int main()
{
  f("hello world");
  return 0;
}
