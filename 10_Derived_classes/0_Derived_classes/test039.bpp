#include <stdio.h>

class B {
public:
  int b;
};

class D : public virtual B {
public:
  int d;
};

void f(D* p)
{
  printf("p->b = %d, p->d = %d\n", p->b, p->d);
}

int main()
{
  D x;
  x.b = 1;
  x.d = 2;
  printf("x.b = %d, x.d = %d\n", x.b, x.d);
  f(&x);
  return 0;
}
