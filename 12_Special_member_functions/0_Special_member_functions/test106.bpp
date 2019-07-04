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

struct A1 :  virtual V1, V2, V3 {
  A1(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f1 = true;
    printf("A1::A1(int) called with %d\n", a);
  }
  ~A1()
  {
    printf("A1::~A1() called\n");
  }
};

struct B1 :  virtual V1, V2, V3 {
  B1(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f1 = true;
    printf("B1::B1(int) called with %d\n", a);
  }
  ~B1()
  {
    printf("B1::~B1() called\n");
  }
};

struct A2 :  V1, virtual V2, V3 {
  A2(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f2 = true;
    printf("A2::A2(int) called with %d\n", a);
  }
  ~A2()
  {
    printf("A2::~A2() called\n");
  }
};

struct B2 :  V1, virtual V2, V3 {
  B2(int b) : V1(b-3), V2(b-2), V3(b-1)
  {
    f2 = true;
    printf("B2::B2(int) called with %d\n", b);
  }
  ~B2()
  {
    printf("B2::~B2() called\n");
  }
};

struct A3 :  V1, V2, virtual V3 {
  A3(int a) : V1(a-3), V2(a-2), V3(a-1)
  {
    f3 = true;
    printf("A3::A3(int) called with %d\n", a);
  }
  ~A3()
  {
    printf("A3::~A3() called\n");
  }
};

struct B3 :  V1, V2, virtual V3 {
  B3(int b) : V1(b-3), V2(b-2), V3(b-1)
  {
    f3 = true;
    printf("B3::B3(int) called with %d\n", b);
  }
  ~B3()
  {
    printf("B3::~B3() called\n");
  }
};

struct C1 : A1, B1 {
  C1(int c) : A1(c-8), B1(c-4)
  {
    f1 = true;
    printf("C1::C1(int) called with %d\n", c);
  }
  ~C1()
  {
    printf("C1::~C1() called\n");
  }
};

struct C2 : A2, B2 {
  C2(int c) : A2(c-8), B2(c-4)
  {
    f2 = true;
    printf("C2::C2(int) called with %d\n", c);
  }
  ~C2()
  {
    printf("C2::~C2() called\n");
  }
};

struct C3 : A3, B3 {
  C3(int c) : A3(c-8), B3(c-4)
  {
    f3 = true;
    printf("C3::C3(int) called with %d\n", c);
  }
  ~C3()
  {
    printf("C3::~C3() called\n");
  }
};

int main()
{
  A1 a1(10);
  printf("\n");
  B1 b1(20);
  printf("\n");
  C1 c1(30);
  printf("\n");

  A2 a2(40);
  printf("\n");
  B2 b2(50);
  printf("\n");
  C2 c2(60);
  printf("\n");

  A3 a3(70);
  printf("\n");
  B3 b3(80);
  printf("\n");
  C3 c3(90);
  printf("\n");

  return 0;
}
