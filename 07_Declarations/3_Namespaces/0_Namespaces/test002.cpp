#include <stdio.h>

int x;

class A {
public:
  int x;
};

class B : public A {
public:
  void f();
};

int main()
{
  x = 1;
  B b;
  b.x = 2;
  b.f();
  return 0;
}

void B::f()
{
  printf("x = %d\n", x);
  printf("this->x = %d\n", this->x);
  printf("::x = %d\n", ::x);
}
