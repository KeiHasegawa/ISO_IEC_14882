/*
 * A functional notation type conversion (5.2.3) can be used to create new
 * objects of its type. [Note: The syntax looks like an explicit call of the
 * constructor.]
 */
#include <stdio.h>

struct complex {
  double re;
  double im;
  complex(double r, double i) : re(r), im(i) {}
};

void cprint(const complex&);

int main()
{
  complex zz = complex(1,2.3);
  cprint( complex(7.8,1.2) );
  return 0;
}

void cprint(const complex& c)
{
  printf("c.re = %f, c.im = %f\n", c.re, c.im);
}

