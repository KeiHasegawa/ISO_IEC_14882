#include <stdio.h>

struct X {
  X();
  int mem;
  virtual X* clone();
  virtual X* newX();
};

X::X() : mem(0)
{
}

X* X::clone()
{
  return new X(*this);
}

X* X::newX()
{
  return new X();
}

void f(X* p)
{
  printf("p->mem = %d\n", p->mem);
  X* p1 = p->clone();
  printf("p1->mem = %d\n", p1->mem);
  X* p2 = p->newX();
  printf("p2->mem = %d\n", p2->mem);
}

int main()
{
  X obj;
  obj.mem = 3;
  f(&obj);
  return 0;
}
