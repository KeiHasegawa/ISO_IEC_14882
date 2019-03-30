#include <stdio.h>

static void f()
{
  printf("`f' called\n");
}

class X {
  int m;
  friend void f();
};

int main()
{
  f();
  return 0;
}
