#include <stdio.h>

class X {
public:
  int mem;
  X() : mem(0) {}
  X(const X& x)
  {
    printf("X copy constructor called\n");
    printf("x.mem = %d\n", x.mem);
    mem = x.mem + 1; 
    printf("mem = %d\n", mem);
  }
};

void f()
{
  X a;
  a.mem = 1;
  X b = a;
  printf("a.mem = %d, b.mem = %d\n", a.mem, b.mem);
}

class Y {
public:
  int mem;
  Y() : mem(1) {}
  Y(Y& y, int n = 0)
  {
    printf("Y copy constructor called\n");
    printf("y.mem = %d, n = %d\n", y.mem, n);
    mem = n;
    printf("mem = %d\n", mem);
  }
};

void g()
{
  Y a;
  a.mem = 3;
  Y b = a;
  printf("a.mem = %d, b.mem = %d\n", a.mem, b.mem);
}

int main()
{
  f();
  g();
  return 0;
}
