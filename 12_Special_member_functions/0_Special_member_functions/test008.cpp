#include <stdio.h>

class X {
  int mem;
public:
  X(int a) : mem(a) {}
  X(const X& x)
  {
    mem = x.mem;
  }
  ~X(){}
  void print()
  {
    printf("mem = %d\n", mem);
  }
};

X f(X a)
{
  return a;
}

int main()
{
  X a(1);
  a.print();
  X b = f(X(2));
  b.print();
  a = f(a);
  a.print();

  return 0;
}
