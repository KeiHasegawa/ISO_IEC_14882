#include <stdio.h>

struct V1 {
  bool f1;
  V1() : f1(false)
  {
    printf("V1::V1() called\n");
  }
  V1(int v1) : f1(false)
  {
    printf("V1::V1(int) called with %d\n", v1);
  }
  ~V1()
  {
    printf("V1::~V1() called\n");
    if (f1)
      printf("\n");
  }
};

struct V2 {
  bool f2;
  V2() : f2(false)
  {
    printf("V2::V2() called\n");
  }
  V2(int v2) : f2(false)
  {
    printf("V2::V2(int) called with %d\n", v2);
  }
  ~V2()
  {
    printf("V2::~V2() called\n");
    if (f2)
      printf("\n");
  }
};

struct V3 {
  bool f3;
  V3() : f3(false)
  {
    printf("V3::V3() called\n");
  }
  V3(int v3) : f3(false)
  {
    printf("V3::V3(int) called with %d\n", v3);
  }
  ~V3()
  {
    printf("V3::~V3() called\n");
    if (f3)
      printf("\n");
  }
};

struct A12 :  virtual V1, virtual V2, V3 {
  A12(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f1 = true;
    printf("A12::A12(int) called with %d\n", a);
  }
  ~A12()
  {
    printf("A12::~A12() called\n");
  }
};

struct B12 :  virtual V1, virtual V2, V3 {
  B12(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f1 = true;
    printf("B12::B12(int) called with %d\n", a);
  }
  ~B12()
  {
    printf("B12::~B12() called\n");
  }
};

struct A23 :  V1, virtual V2, virtual V3 {
  A23(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f2 = true;
    printf("A23::A23(int) called with %d\n", a);
  }
  ~A23()
  {
    printf("A23::~A23() called\n");
  }
};

struct B23 :  V1, virtual V2, virtual V3 {
  B23(int b) : V1(b-3), V2(b-2), V3(b-1)
  {
    f2 = true;
    printf("B23::B23(int) called with %d\n", b);
  }
  ~B23()
  {
    printf("B23::~B23() called\n");
  }
};

struct A31 :  virtual V3, V2, virtual V1 {
  A31(int a) : V3(a-3), V2(a-2), V1(a-1)
  {
    f3 = true;
    printf("A31::A31(int) called with %d\n", a);
  }
  ~A31()
  {
    printf("A31::~A31() called\n");
  }
};

struct B31 :  virtual V3, V2, virtual V1 {
  B31(int b) : V3(b-3), V2(b-2), V1(b-1)
  {
    f3 = true;
    printf("B31::B31(int) called with %d\n", b);
  }
  ~B31()
  {
    printf("B31::~B31() called\n");
  }
};

struct C12 : A12, B12 {
  C12(int c) : A12(c-8), B12(c-4)
  {
    f1 = true;
    printf("C12::C12(int) called with %d\n", c);
  }
  ~C12()
  {
    printf("C12::~C12() called\n");
  }
};

struct C23 : A23, B23 {
  C23(int c) : A23(c-8), B23(c-4)
  {
    f2 = true;
    printf("C23::C23(int) called with %d\n", c);
  }
  ~C23()
  {
    printf("C23::~C23() called\n");
  }
};

struct C31 : A31, B31 {
  C31(int c) : A31(c-8), B31(c-4)
  {
    f3 = true;
    printf("C31::C31(int) called with %d\n", c);
  }
  ~C31()
  {
    printf("C31::~C31() called\n");
  }
};

int main()
{
  A12 a12(10);
  printf("\n");
  B12 b12(20);
  printf("\n");
  C12 c12(30);
  printf("\n");

  A23 a23(40);
  printf("\n");
  B23 b23(50);
  printf("\n");
  C23 c23(60);
  printf("\n");

  A31 a31(70);
  printf("\n");
  B31 b31(80);
  printf("\n");
  C31 c31(90);
  printf("\n");

  return 0;
}
