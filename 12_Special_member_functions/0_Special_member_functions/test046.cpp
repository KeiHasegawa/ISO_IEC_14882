#include <stdio.h>

class M {
  int m;
public:
  M(int mm) : m(mm)
  {
    printf("M::M called\n");
  }
  void print()
  {
    printf("m = %d\n", m);
  }
};

class X : public M {
  int x;
public:
  X() : M(1), x(2)
  {
    printf("X::X called\n");
  }
  void print()
  {
    M::print();
    printf("x = %d\n", x);
  }
};

int main()
{
  X x;
  x.print();
  return 0;
}
