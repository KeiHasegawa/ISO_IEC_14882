#include <stdio.h>

void f()
{
  printf("`f' called\n");
}

void g()
{
  printf("`g' called\n");
}

struct S {
  bool m;
  operator bool(){ return m; }
};

void h(S a)
{
  if (a)
    f();
  else
    g();
}

int main()
{
  S x;
  x.m = true;
  h(x);
  x.m = false;
  h(x);
  return 0;
}
