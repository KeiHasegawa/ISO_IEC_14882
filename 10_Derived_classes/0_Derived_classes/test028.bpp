#include <stdio.h>

class B {
public:
  int b;
  virtual B* f();
};

class D : public B {
public:
  int d;
  D* f();
};

void g(B* p)
{
  printf("p->b = %d\n", p->b);
  B* p2 = p->f();
  p2->b = 4;
  printf("p->b = %d\n", p->b);
}

void h(D* p)
{
  printf("p->b = %d, p->d = %d\n", p->b, p->d);
  D* p2 = p->f();
  p2->b = 5;
  p2->d = 6;
  printf("p->b = %d, p->d = %d\n", p->b, p->d);
}

int main()
{
  D x;
  x.b = 1;
  x.d = 2;
  B y;
  y.b = 3;

  g(&x);
  g(&y);
  h(&x);
  return 0;
}

B* B::f()
{
  printf("B::f called\n");
  return this;
}

D* D::f()
{
  printf("D::f called\n");
  return this;
}

