#include <stdio.h>

class X {
public:
  int& x;
  X();
  X(int& r) : x(r) {}
  ~X(){}
};

class B : public X {
public:
  int b;
  B(int i) : X(i), b(i) {}
};

class D : public B {
  int d;
  int d2;
public:
  D() : B(2) {}
};

int main()
{
  D d;
  printf("d.x = %d, d.b = %d\n", d.x, d.b);
  d.x = 3;
  d.b = 4;
  printf("d.x = %d, d.b = %d\n", d.x, d.b);
  return 0;
}
