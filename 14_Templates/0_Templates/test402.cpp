#include <stdio.h>

template<class C> C&& f(C&& a)
{
  printf("`f' called\n");
  return a;
}

struct X {};

X& g(X& a)
{
  printf("`g' called\n");
  return f(a);
}

int main()
{
  X x;
  g(x);
  return 0;
}
