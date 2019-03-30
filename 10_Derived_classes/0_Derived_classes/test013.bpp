#include <stdio.h>

struct A {
  int a;
  int f(){ return a; }
};

struct B {
  int b;
  int f(){ return b; }
};

struct C : public A, public B {
  int f(){ return A::f() + B::f(); }
};

int main()
{
  C x;
  x.a = 1;
  x.b = 2;
  printf("x.f() return value : %d\n", x.f());
  x.a = 3;
  x.b = 4;
  printf("x.f() return value : %d\n", x.f());
  return 0;
}
