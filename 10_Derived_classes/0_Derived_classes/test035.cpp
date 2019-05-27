#include <stdio.h>

struct A { int a; };
struct B1 : virtual A { int b1; };
struct B2 : virtual A { int b2; };
struct C : B1, B2 { int c; };
struct D : C { int d; };
struct E1 : virtual D { int e1; };
struct E2 : virtual D { int e2; };
struct F : E1, E2 { int f; void g(); };

void F::g()
{
  printf("F::g() called\n");
  printf("a = %d\n", a);
  printf("b1 = %d\n", b1);
  printf("b2 = %d\n", b2);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("e1 = %d\n", e1);
  printf("e2 = %d\n", e2);
  printf("f = %d\n", f);

  printf("E1::a = %d\n", E1::a);
  printf("E2::a = %d\n", E2::a);
  printf("B1::a = %d\n", B1::a);
  printf("B2::a = %d\n", B2::a);
  printf("E1::B1::a = %d\n", E1::B1::a);
  printf("E1::B2::a = %d\n", E1::B2::a);
  printf("E2::B1::a = %d\n", E2::B1::a);
  printf("E2::B2::a = %d\n", E2::B2::a);
}

void h(F* pf)
{
  printf("h(F*) called\n");
  printf("pf->a = %d\n", pf->a);
  printf("pf->b1 = %d\n", pf->b1);
  printf("pf->b2 = %d\n", pf->b2);
  printf("pf->c = %d\n", pf->c);
  printf("pf->d = %d\n", pf->d);
  printf("pf->e1 = %d\n", pf->e1);
  printf("pf->e2 = %d\n", pf->e2);
  printf("pf->f = %d\n", pf->f);

  printf("pf->E1::a = %d\n", pf->E1::a);
  printf("pf->E2::a = %d\n", pf->E2::a);
  printf("pf->B1::a = %d\n", pf->B1::a);
  printf("pf->B2::a = %d\n", pf->B2::a);
  printf("pf->E1::B1::a = %d\n", pf->E1::B1::a);
  printf("pf->E1::B2::a = %d\n", pf->E1::B2::a);
  printf("pf->E2::B1::a = %d\n", pf->E2::B1::a);
  printf("pf->E2::B2::a = %d\n", pf->E2::B2::a);
}

void hh(F f)
{
  printf("hh(F) called\n");
  printf("f.a = %d\n", f.a);
  printf("f.b1 = %d\n", f.b1);
  printf("f.b2 = %d\n", f.b2);
  printf("f.c = %d\n", f.c);
  printf("f.d = %d\n", f.d);
  printf("f.e1 = %d\n", f.e1);
  printf("f.e2 = %d\n", f.e2);
  printf("f.f = %d\n", f.f);

  printf("f.E1::a = %d\n", f.E1::a);
  printf("f.E2::a = %d\n", f.E2::a);
  printf("f.B1::a = %d\n", f.B1::a);
  printf("f.B2::a = %d\n", f.B2::a);
  printf("f.E1::B1::a = %d\n", f.E1::B1::a);
  printf("f.E1::B2::a = %d\n", f.E1::B2::a);
  printf("f.E2::B1::a = %d\n", f.E2::B1::a);
  printf("f.E2::B2::a = %d\n", f.E2::B2::a);
}

int main()
{
  F x;
  x.a = 1;
  x.b1 = 2;
  x.b2 = 3;
  x.c = 4;
  x.d = 5;
  x.e1 = 6;
  x.e2 = 7;
  x.f = 8;

  x.g();
  h(&x);
  hh(x);
  return 0;
}



