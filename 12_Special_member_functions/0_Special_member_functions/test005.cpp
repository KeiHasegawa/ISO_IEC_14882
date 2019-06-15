#include <stdio.h>

class complex {
public:
  double re, im;
  complex(double r, double i) : re(r), im(i) {}
};

void cprint(const complex& x)
{
  printf("x.re = %f, x.im = %f\n", x.re, x.im);
}

int main()
{
  complex zz = complex(1,2.3);
  cprint(zz);
  cprint(complex(7.8,1.2));
  return 0;
}
