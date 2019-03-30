#include <stdio.h>

class B {
public:
  int b;
  virtual void f(B*);
};

class D : public B {
public:
  void f(D*);
  int m;
};

void g(B* p1, B* p2)
{
  p1->f(p2);
}

void h(D* p1, D* p2)
{
  p1->f(p2);
}

int main()
{
  D d;
  d.b = 1;
  d.m = 2;
  B b;
  b.b = 3;
  g(&d,&b);
  D d2;
  d2.b = 4;
  d2.m = 5;
  h(&d,&d2);
  return 0;
}

void D::f(D* p)
{
  printf("D::f called, b = %d, m = %d, p->b = %d, p->m = %d\n",
	 b, m, p->b, p->m);
}

void B::f(B* p)
{
  printf("B::f called, b = %d, p->b = %d\n", b, p->b);
}
