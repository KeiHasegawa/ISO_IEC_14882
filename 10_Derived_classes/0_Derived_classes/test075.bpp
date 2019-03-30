#include <stdio.h>

struct S0 {
  virtual void vf0(){ printf("S0::vf0 called\n"); }
};

struct S1 : S0 {
  void vf0(){ printf("S1::vf0 called\n"); }
  virtual void vf1(){ printf("S1::vf1 called\n"); }
};

struct S2 : S1 {
  void vf0(){ printf("S2::vf0 called\n"); }
  void vf1(){ printf("S2::vf1 called\n"); }
  virtual void vf2(){ printf("S2::vf2 called\n"); }
};

void h0(S0* p0)
{
  p0->vf0();
}

void h1(S1* p1)
{
  p1->vf1();
}

void h2(S2* p2)
{
  p2->vf2();
}

int main()
{
  S0 s0;
  h0(&s0);
  S1 s1;
  h0(&s1);
  h1(&s1);
  S2 s2;
  h0(&s2);
  h1(&s2);
  h2(&s2);
  return 0;
}
