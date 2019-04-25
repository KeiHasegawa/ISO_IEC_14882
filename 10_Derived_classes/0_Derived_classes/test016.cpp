#include <stdio.h>

struct A1 {
  void f()
  {
    printf("A1::f called\n");
  }
};

struct A2 : virtual A1 {
  void f()
  {
    printf("A2::f called\n");
  }
};

struct A3 : A2 {};
struct A4 : A3, virtual A1 {};

void f(A2* pa2, A4* pa4)
{
  pa2->f();
  pa4->f();
}

int main()
{
  A4 a4;
  f(&a4,&a4);
  return 0;
}
