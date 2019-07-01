#include <stdio.h>

class M {
  int m;
public:
  M(int);
  void print()
  {
    printf("m = %d\n", m);
  }
};

class X : public M {
  int x;
public:
  X();
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

X::X() : M(1), x(2)
{
  printf("X::X called\n");
}

M::M(int mm) : m(mm)
{
  printf("M::M called\n");
}
