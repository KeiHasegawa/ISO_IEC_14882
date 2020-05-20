#include <stdio.h>

struct S {
  void f()
  {
    printf("S::f() is called\n");
  }
};

void g(const S& a)
{
  S(a).f();
}

int main()
{
  S b;
  g(b);
  return 0;
}
