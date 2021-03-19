#include <stdio.h>

struct B1 {
  int m1;
};

struct B2 {
  virtual void vf()
  {
    printf("B2::vf() called\n");
  }
};

struct B3 {
  double m3;
};

struct D : B1, B2, B3 {};

void f(B2* pb2, bool b)
{
  pb2->vf();
  if (b) {
    D* pd = (D*)pb2;
    printf("pd->m1 = %d\n", pd->m1);
    printf("pd->m3 = %f\n", pd->m3);
  }
}

int main()
{
  B2 b2;
  f(&b2, false);
  printf("\n");
  D d;
  d.m1 = 3;
  d.m3 = 4.5;
  f(&d, true);
  return 0;
}
