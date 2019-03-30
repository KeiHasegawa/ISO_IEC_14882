#include <stdio.h>

class B {
public:
  int i;
};

class D1 : public B {
public:
  void f()
  {
    printf("`D1::f' called\n");
    i++;
    printf("i = %d\n", i);
  }
};

struct D2 : B {
public:
  void f()
  {
    printf("`D2::f' called\n");
    i++;
    printf("i = %d\n", i);
  }
};

int main()
{
  D1 d1;
  d1.i = 1;
  d1.f();
  D2 d2;
  d2.i = 2;
  d2.f();
  return 0;
}
