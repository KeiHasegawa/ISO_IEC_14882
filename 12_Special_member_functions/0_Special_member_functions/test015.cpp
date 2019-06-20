#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  {
    return x;
  }
};

void g(X a, X b)
{
  int i = (a) ? 1+a : 0;
  printf("i = %d\n", i);
  int j = (a&&b) ? a+b : i;
  printf("j = %d\n", j);
  if (a) {
    i=1;
    printf("i = %d\n", i);
  }
}

int main()
{
  g(X(1),X(2));
  return 0;
}
