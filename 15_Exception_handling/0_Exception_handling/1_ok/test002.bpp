#include <stdio.h>

struct Overflow {
  char op;
  double x;
  double y;
  Overflow(char c, double a, double b)
    : op(c), x(a), y(b) {}
};

void g()
{
  Overflow dummy('?',1,2);
  throw dummy;
}

int main()
{
  try {
    g();
  }
  catch(Overflow& oo) {
    printf("%f %c %f\n", oo.x, oo.op, oo.y);
  }
  return 0;
}
