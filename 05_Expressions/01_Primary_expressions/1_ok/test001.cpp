#include <stdio.h>

struct S {
  S f() const
  {
    printf("S::f() called\n");
    return *this;
  }
};

int main()
{
  S s;
  s.f();
  return 0;
}

