#include <stdio.h>

void f(int n)
{
  n = 1234;
  printf("n = %d\n", n);
}

class X {
public:
  int mem;
};

void f(X x)
{
  x.mem = 5678;
  printf("x.mem = %d\n", x.mem);
}

template<class T> void g()
{
  T a;
  f(a);
}

int main()
{
  g<int>();
  g<X>();
  return 0;
}
