#include <stdio.h>

struct A1 {
  char a1[4];
  virtual void fa1(){ printf("A1::fa1() called\n"); }
  virtual void ga1(){ printf("A1::ga1() called\n"); }
  virtual void ha1(){ printf("A1::ha1() called\n"); }
};

struct A2 {
  char a2[8];
  virtual void fa2(){ printf("A2::fa2() called\n"); }
  virtual void ga2(){ printf("A2::ga2() called\n"); }
};

struct A3 {
  char a3[12];
  virtual void fa3(){ printf("A3::fa3() called\n"); }
};

struct B1 {
  char b1[16];
  virtual void fb1(){ printf("B1::fb1() called\n"); }
  virtual void gb1(){ printf("B1::gb1() called\n"); }
  virtual void hb1(){ printf("B1::hb1() called\n"); }
};

struct B2 {
  char b2[20];
  virtual void fb2(){ printf("B2::fb2() called\n"); }
  virtual void gb2(){ printf("B2::gb2() called\n"); }
};

struct B3 {
  char b3[24];
  virtual void fb3(){ printf("B3::fb3() called\n"); }
};

struct C1 {
  char c1[28];
  virtual void fc1(){ printf("C1::fc1() called\n"); }
  virtual void gc1(){ printf("C1::gc1() called\n"); }
  virtual void hc1(){ printf("C1::hc1() called\n"); }
};

struct C2 {
  char c2[32];
  virtual void fc2(){ printf("C2::fc2() called\n"); }
  virtual void gc2(){ printf("C2::gc2() called\n"); }
};

struct C3 {
  char c3[36];
  virtual void fc3(){ printf("C3::fc3() called\n"); }
};

struct D1 : A1, A2, A3 {};

struct D2 : B1, B2, B3 {};

struct D3 : C1, C2, C3 {};

struct DD : D1, D2, D3 {
  void fa1(){ printf("DD::fa1() called\n"); }
  void ga1(){ printf("DD::ga1() called\n"); }
  void ha1(){ printf("DD::ha1() called\n"); }
  void fa2(){ printf("DD::fa2() called\n"); }
  void ga2(){ printf("DD::ga2() called\n"); }
  void fa3(){ printf("DD::fa3() called\n"); }
  void fb1(){ printf("DD::fb1() called\n"); }
  void gb1(){ printf("DD::gb1() called\n"); }
  void hb1(){ printf("DD::hb1() called\n"); }
  void fb2(){ printf("DD::fb2() called\n"); }
  void gb2(){ printf("DD::gb2() called\n"); }
  void fb3(){ printf("DD::fb3() called\n"); }
  void fc1(){ printf("DD::fc1() called\n"); }
  void gc1(){ printf("DD::gc1() called\n"); }
  void hc1(){ printf("DD::hc1() called\n"); }
  void fc2(){ printf("DD::fc2() called\n"); }
  void gc2(){ printf("DD::gc2() called\n"); }
  void fc3(){ printf("DD::fc3() called\n"); }
};

void test_A1(A1* pa1)
{
  pa1->fa1();
  pa1->ga1();
  pa1->ha1();
}

void test_A2(A2* pa2)
{
  pa2->fa2();
  pa2->ga2();
}

void test_A3(A3* pa3)
{
  pa3->fa3();
}

void test_B1(B1* pb1)
{
  pb1->fb1();
  pb1->gb1();
  pb1->hb1();
}

void test_B2(B2* pb2)
{
  pb2->fb2();
  pb2->gb2();
}

void test_B3(B3* pb3)
{
  pb3->fb3();
}

void test_C1(C1* pc1)
{
  pc1->fc1();
  pc1->gc1();
  pc1->hc1();
}

void test_C2(C2* pc2)
{
  pc2->fc2();
  pc2->gc2();
}

void test_C3(C3* pc3)
{
  pc3->fc3();
}

int main()
{
  D1 d1;
  printf("D1 test\n");
  test_A1(&d1);
  test_A2(&d1);
  test_A3(&d1);

  D2 d2;
  printf("D2 test\n");
  test_B1(&d2);
  test_B2(&d2);
  test_B3(&d2);

  D3 d3;
  printf("D3 test\n");
  test_C1(&d3);
  test_C2(&d3);
  test_C3(&d3);

  DD dd;
  printf("DD test\n");
  test_A1(&dd);
  test_A2(&dd);
  test_A3(&dd);
  test_B1(&dd);
  test_B2(&dd);
  test_B3(&dd);
  test_C1(&dd);
  test_C2(&dd);
  test_C3(&dd);
  return 0;
}
