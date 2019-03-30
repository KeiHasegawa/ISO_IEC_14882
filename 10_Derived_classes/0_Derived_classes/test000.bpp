#include <stdio.h>

class base {
public:
  int a, b;
};

class derived : public base {
public:
  int b, c;
};

int main()
{
  derived d;
  d.a = 1;
  d.base::b = 2;
  d.b = 3;
  d.c = 4;
  printf("d.a = %d d.base::b = %d d.b = %d d.c = %d\n",
	 d.a, d.base::b, d.b, d.c);
  base* bp = &d;
  printf("bp->a = %d bp->b = %d\n", bp->a, bp->b);
  return 0;
}
