#include <stdio.h>

class complex {
  double re,im;
public:
  complex operator+(complex x)
  {
    printf("operator + called\n");
    return complex(re + x.re, im + x.im);
  }
  complex operator*(complex x)
  {
    printf("operator * called\n");
    return complex(re * x.re - im * x.im, re * x.im + im * x.re);
  }
  complex(double r, double i = 0){ re=r; im=i; }
  void print()
  {
    printf("(%f,%f)\n", re, im);
  }
};

int main()
{
  complex z1 = complex(1.2);
  z1.print();
  complex z2 = 3;
  z2.print();
  z1 = complex(3.5,7)+2.7*z2;
  z1.print();
  return 0;
}
