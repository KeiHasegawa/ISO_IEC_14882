#include <stdio.h>

class X {
public:
  X()
  {
    printf("X::X(void) called\n");
  }
  X(const X&, const X&)
  {
    printf("X::X(const X&, const X&) called\n");
  }
  X f()
  {
    printf("X::f called\n");
    return X();
  }
  X g(const X& xx)
  {
    printf("X::g called\n");
    return X(*this,xx);
  }
};

int main()
{
  X x;
  x.f();
  x.g(x);
  return 0;
}
