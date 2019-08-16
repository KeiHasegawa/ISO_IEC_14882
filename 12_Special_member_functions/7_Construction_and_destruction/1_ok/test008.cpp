#include <stdio.h>

struct V {
  virtual void f();
  virtual void g();
};

struct A : virtual V {
  virtual void f();
};

struct B : virtual V {
  virtual void g();
};

struct D : A, B {
  virtual void f();
  virtual void g();
};

void test_V(V* pv)
{
  pv->f();
  pv->g();
}

void test_A(A* pa)
{
  pa->f();
}

void test_B(B* pb)
{
  pb->g();
}

void test_D(D* pd)
{
  pd->f();
  pd->g();
}

int main()
{
  V v;
  test_V(&v);
  printf("\n");

  A a;
  test_V(&a);
  test_A(&a);
  printf("\n");

  B b;
  test_V(&b);
  test_B(&b);
  printf("\n");

  D d;
  test_V(&d);
  test_A(&d);
  test_B(&d);
  test_D(&d);

  return 0;
}

void V::f()
{
  printf("`V::f' called\n");
}

void V::g()
{
  printf("`V::g' called\n");
}

void A::f()
{
  printf("`A::f' called\n");
}

void B::g()
{
  printf("`B::g' called\n");
}

void D::f()
{
  printf("`D::f' called\n");
}

void D::g()
{
  printf("`D::g' called\n");
}
