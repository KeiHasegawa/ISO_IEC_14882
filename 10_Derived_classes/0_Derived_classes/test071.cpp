/*
 * Reference typedef-name which declared in base class.
 */
#include <stdio.h>

struct B {
  typedef int T;
};

struct D : public B {
  void f(T t)
  {
    printf("t = %d\n", t);
  }
};

int main()
{
  D d;
  d.f(3);
  return 0;
}
