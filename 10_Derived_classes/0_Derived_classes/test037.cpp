#include <stdio.h>

int x = 1234;

class A {
public:
  int x;
};

class B : public A {
public:
  void f();
};

void B::f()
{
  printf("x = %d\n", x);
  printf("::x = %d\n", ::x);
}

int main()
{
  printf("x = %d\n", x);
  B b;
  b.x = 4567;
  b.f();
  return 0;
}
