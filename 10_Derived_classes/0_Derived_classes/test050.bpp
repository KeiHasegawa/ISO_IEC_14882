#include <stdio.h>

struct S {
  virtual void f()
  {
    printf("S::f called\n");
  }
};

void g(S* p)
{
  void (S::*x)() = p->f;
  (p->*x)();
}

int main()
{
  S s;
  g(&s);
  return 0;
}
