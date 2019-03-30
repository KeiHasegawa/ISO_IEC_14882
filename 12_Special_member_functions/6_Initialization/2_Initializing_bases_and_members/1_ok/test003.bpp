/*
 * Names in the expression-list of a mem-initializer are evaluated in the scope
 * of the constructor for which the mem-initializer is specified.
 */
#include <stdio.h>

class X {
  int a;
  int b;
  int i;
  int j;
public:
  const int& r;
  X(int i): r(a), b(i), i(i), j(this->i) {}
  void f();
};

int main()
{
  X x(5);
  x.f();
  return 0;
}

void X::f()
{
  printf("a = %d\n", a = 3);
  printf("b = %d\n", b);
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("r = %d\n", r);
}
