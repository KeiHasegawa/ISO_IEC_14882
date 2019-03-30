#include <stdio.h>

class C {
public:
  virtual void f();
  virtual void g();
};

void g(C* p)
{
  p->f();
  p->g();
}

int main()
{
  C c;
  g(&c);
  return 0;
}

void C::f()
{
  printf("C::f called\n");
}

void C::g()
{
  printf("C::g called\n");
}
