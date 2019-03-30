#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  {
    printf("operator X::int called\n");
    return x;
  }
};

void f(X a)
{
  int i = int(a);
  printf("i = %d\n", i);
  i = (int)a;
  printf("i = %d\n", i);
  i = a;
  printf("i = %d\n", i);
}

int main()
{
  f(X(5));
  return 0;
}
