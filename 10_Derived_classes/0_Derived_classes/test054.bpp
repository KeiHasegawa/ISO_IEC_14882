#include <stdio.h>

struct A1 { int f(); };
struct A2 : virtual A1 { int f(); };
struct A3 : A2 {};
struct A4 : virtual A1, A3 {};

void f(A2* pa2, A4* pa4)
{
  printf("pa2->f() return value : %d\n", pa2->f());
  printf("pa4->f() return value : %d\n", pa4->f());
}

int main()
{
  A4 a4;
  f(&a4,&a4);
  A2 a2;
  f(&a2,&a4);
  return 0;
}

int A1::f()
{
  printf("A1::f called\n");
  return 1;
}

int A2::f()
{
  printf("A2::f called\n");
  return 2;
}
