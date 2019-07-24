#include <stdio.h>

struct V {
  int v;
  V();
  V(const V&);
};

struct A : virtual V {
  int a;
  A();
  A(const A&);
};

struct B : virtual V {
  int b;
  B();
  B(const B&);
};

struct C : A, B {
  int c;
  C();
  C(const C&);
};

void test_V()
{
  printf("test_V called\n");
  V vx;
  printf("\n");
  V vy = vx;
  printf("vx.v = %d vy.v = %d\n", vx.v, vy.v);
  printf("\n");
}

void test_A()
{
  printf("test_A called\n");
  A ax;
  printf("\n");
  A ay = ax;
  printf("ax.v = %d ax.a = %d ay.v = %d ay.a = %d\n", ax.v, ax.a, ay.v, ay.a);
  printf("\n");
}

void test_B()
{
  printf("test_B called\n");
  B bx;
  printf("\n");
  B by = bx;
  printf("bx.v = %d bx.b = %d by.v = %d by.b = %d\n", bx.v, bx.b, by.v, by.b);
  printf("\n");
}

void test_C()
{
  printf("test_C called\n");
  C cx;
  printf("\n");
  C cy = cx;
  printf("cx.v = %d cx.a = %d cx.b = %d cx.c = %d\n", cx.v, cx.a, cx.b, cx.c);
  printf("cy.v = %d cy.a = %d cy.b = %d cy.c = %d\n", cy.v, cy.a, cy.b, cy.c);
}

int main()
{
  test_V();
  test_A();
  test_B();
  test_C();
  return 0;
}

V::V() : v(1)
{
  printf("V::V() called\n");
}

V::V(const V& src)
{
  v = src.v + 2;
  printf("V::V(const V&) called\n");
}

A::A() : a(3)
{
  printf("A::A() called\n");
}

A::A(const A& src)
{
  a = src.a + 4;
  printf("A::A(const A&) called\n");
}

B::B() : b(5)
{
  printf("B::B() called\n");
}

B::B(const B& src)
{
  b = src.b + 6;
  printf("B::B(const B&) called\n");
}

C::C() : c(7)
{
  printf("C::C() called\n");
}

C::C(const C& src)
{
  c = src.c + 8;
  printf("C::C(const C&) called\n");
}
