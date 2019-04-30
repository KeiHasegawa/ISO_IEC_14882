#include <stdio.h>

struct B1 {
  virtual void f1(){ printf("B1::f1() called\n"); }
};

struct B2 {
  int b2;
  virtual void f2(){ printf("B2::f2() called\n"); }
  virtual void g2(){ printf("B2::g2() called\n"); }
};

struct B3 {
  int b3[2];
  virtual void f3(){ printf("B3::f3() called\n"); }
  virtual void g3(){ printf("B3::g3() called\n"); }
  virtual void h3(){ printf("B3::h3() called\n"); }
};


struct D : B1, B2, B3 {
};

struct D2 : D {
  void f1(){ printf("D2::f1() called\n"); }
  void f2(){ printf("D2::f2() called\n"); }
  void g2(){ printf("D2::g2() called\n"); }
  void f3(){ printf("D2::f3() called\n"); }
  void g3(){ printf("D2::g3() called\n"); }
  void h3(){ printf("D2::h3() called\n"); }
};

void test1(B1* pb1)
{
  pb1->f1();
}

void test2(B2* pb2)
{
  pb2->f2();
  pb2->g2();
}

void test3(B3* pb3)
{
  pb3->f3();
  pb3->g3();
  pb3->h3();
}

int main()
{
  printf("D test\n");
  D x;
  test1(&x);
  test2(&x);
  test3(&x);

  printf("D2 test\n");
  D2 x2;
  test1(&x2);
  test2(&x2);
  test3(&x2);

  return 0;
}
