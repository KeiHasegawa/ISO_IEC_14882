#include <stdio.h>

struct B1 {
  char m1[10];
  virtual void vf1()
  {
    printf("B1::vf1() called\n");
  }
};

struct B2 {
  double m2;
};

struct B3 {
  virtual void vf3()
  {
    printf("B3::vf3() called\n");
  }
};

struct D : B1, B2, B3 {};

void f(B3* pb3)
{
  pb3->vf3();
  if (D* pd = dynamic_cast<D*>(pb3)) {
     printf("pd->m1 = \"%s\"\n", pd->m1);
     printf("pd->m2 = %f\n", pd->m2);
  }
}

int main()
{
  B3 b3;
  f(&b3);
  printf("\n");
  D d;
  d.m1[0] = 'a';
  d.m1[1] = 'b';
  d.m1[2] = 'c';
  d.m1[3] = '\0';
  d.m2 = -0.5;
  f(&d);
  return 0;
}

