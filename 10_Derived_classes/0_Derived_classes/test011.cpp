#include <stdio.h>

class A {
public:
  int a;
  int (*b)();
  int f();
  int f(int);
  int g();
};

class B {
  int a;
  int b();
public:
  int f();
  int g;
  int h()
  {
    printf("B::h(void) called\n");
    return 1;
  }
  int h(int a)
  {
    printf("B::h(int) called with %d\n", a);
    return 2;
  }
};

class C : public A, public B {};

void f(C* pc)
{
  printf("pc->h() return value : %d\n", pc->h());
  printf("pc->h(3) return value : %d\n", pc->h(3));
}

int main()
{
  C x;
  f(&x);
  return 0;
}
