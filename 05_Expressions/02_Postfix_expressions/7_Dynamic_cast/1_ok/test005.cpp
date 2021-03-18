#include <stdio.h>

struct B1 {
  virtual void vf()
  {
    printf("B1::vf() called\n");
  }
};

struct B2 {
  double m2;
};

struct B3 {
  char m3[5];
};

struct D : B1, B2, B3 {
  void vf()
  {
    printf("D::vf() called\n");
  }
};

void f(B1* pb1)
{
  D* pd = dynamic_cast<D*>(pb1);
  if (pd) {
    printf("%f\n", pd->m2);
    printf("\"%s\"\n", pd->m3);
  }
  pb1->vf();
}

int main()
{
  B1 b1;
  f(&b1);
  printf("\n");
  D d;
  d.m2 = 2.5;
  d.m3[0] = 'a';
  d.m3[1] = 'b';
  d.m3[2] = 'c';
  d.m3[3] = 'd';
  d.m3[4] = '\0';
  f(&d);
  return 0;
}
