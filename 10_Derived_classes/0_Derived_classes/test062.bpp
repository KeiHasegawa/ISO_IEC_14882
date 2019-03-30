#include <stdio.h>

struct B1 {
  int b1;
  void f1()
  {
    printf("B1::f1 called\n");
    printf("b1 = %d\n", b1);
  }
};

struct B2 {
  int b2;
  void f2()
  {
    printf("B2::f2 called\n");
    printf("b2 = %d\n", b2);
  }
};

struct D : public B1, public B2 {
};

int main()
{
  D d;
  d.b1 = 1;
  d.b2 = 2;
  d.f1();
  d.f2();
  return 0;
}
