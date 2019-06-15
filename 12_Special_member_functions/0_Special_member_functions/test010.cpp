#include <stdio.h>

class X {
  int mem;
public:
  X(int m) : mem(m) {}
  X(const char* p, int m = 0) : mem(m)
  {
    printf("X::X(const char*, int) called with %s %d\n",p,m);
  }
  void print()
  {
    printf("mem = %d\n",mem);
  }
};

void f(X arg)
{
  printf("f(X) called\n");
  arg.print();
}

int main()
{
  X a = 1;
  a.print();
  X b = "Jessie";
  b.print();
  a = 2;
  a.print();
  f(3);
  return 0;
}
