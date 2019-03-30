#include <stdio.h>

struct Overflow {
  char op;
  double x;
  double y;
  Overflow(char c, double a, double b)
    : op(c), x(a), y(b) {}
};

void f(double x)
{
  throw Overflow('+',x,3.4);
}

int main()
{
  try {
    f(1.2);
  }
  catch(Overflow& oo) {
    printf("%f %c %f\n", oo.x, oo.op, oo.y);
  }
  return 0;
}
