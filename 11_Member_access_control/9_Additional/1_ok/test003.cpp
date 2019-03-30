#include <stdio.h>

class B {
public:
  static void f();
  void g();
};

class D : private B {};

class DD : public D {
public:
  void h();
};

void DD::h()
{
  printf("`DD:h' called\n");
  B::f();
}

int main()
{
  DD dd;
  dd.h();
  return 0;
}

void B::f()
{
  printf("`B::f' called\n");
}
