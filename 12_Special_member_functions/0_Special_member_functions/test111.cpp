#include <stdio.h>

struct V {
  int v;
  V(int);
  V(const V&);
};

struct A : virtual V {
  int a;
  A(int);
  A(const A&);
};

struct B : virtual V {
  int b;
  B(int);
  B(const B&);
};

struct C : A, B {
  int c;
  C(int);
  C(const C&);
};

void test_V(int vv)
{
  printf("test_V called\n");
  V vx(vv);
  printf("\n");
  V vy = vx;
  printf("vx.v = %d vy.v = %d\n", vx.v, vy.v);
  printf("\n");
}

void test_A(int aa)
{
  printf("test_A called\n");
  A ax(aa);
  printf("\n");
  A ay = ax;
  printf("ax.v = %d ax.a = %d ay.v = %d ay.a = %d\n", ax.v, ax.a, ay.v, ay.a);
  printf("\n");
}

void test_B(int bb)
{
  printf("test_B called\n");
  B bx(bb);
  printf("\n");
  B by = bx;
  printf("bx.v = %d bx.b = %d by.v = %d by.b = %d\n", bx.v, bx.b, by.v, by.b);
  printf("\n");
}

void test_C(int cc)
{
  printf("test_C called\n");
  C cx(cc);
  printf("\n");
  C cy = cx;
  printf("cx.v = %d cx.a = %d cx.b = %d cx.c = %d\n", cx.v, cx.a, cx.b, cx.c);
  printf("cy.v = %d cy.a = %d cy.b = %d cy.c = %d\n", cy.v, cy.a, cy.b, cy.c);
}

int main()
{
  test_V(1);
  test_A(2);
  test_B(3);
  test_C(4);
  return 0;
}

V::V(int vv) : v(vv)
{
  printf("V::V(int) called\n");
}

V::V(const V& src)
{
  v = src.v + 5;
  printf("V::V(const V&) called\n");
}

A::A(int aa) : V(aa), a(aa+100)
{
  printf("A::A(int) called\n");
}

A::A(const A& src) : V(src)
{
  a = src.a + 6;
  printf("A::A(const A&) called\n");
}

B::B(int bb) : V(bb), b(bb+200)
{
  printf("B::B(int) called\n");
}

B::B(const B& src) : V(src)
{
  b = src.b + 7;
  printf("B::B(const B&) called\n");
}

C::C(int cc) : V(cc+300), A(cc+400), B(cc+500), c(cc+600)
{
  printf("C::C(int) called\n");
}

C::C(const C& src) : V(src), A(src), B(src)
{
  c = src.c + 8;
  printf("C::C(const C&) called\n");
}
