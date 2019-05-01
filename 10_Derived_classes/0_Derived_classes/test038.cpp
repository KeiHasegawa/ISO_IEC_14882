#include <stdio.h>

class A {
public:
  int f()
  {
    printf("A::f called\n");
    return 1;
  }
};

class B {
public:
  int g()
  {
    printf("B::g called\n");
    return 2;
  }
};

class C : public A, public B {
public:
  int h(){ return f() + g(); }
};

int main()
{
  C c;
  printf("c.h() return value : %d\n", c.h());
  return 0;
}

