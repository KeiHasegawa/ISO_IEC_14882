#include <stdio.h>

class complex {
  double re, im;
public:
  complex() : re(0), im(0)
  {
    printf("complex::complex() called\n");
  }
  complex(double r) : re(r), im(0)
  {
    printf("complex::complex(double) called\n");
  }
  complex(double r, double i) : re(r), im(i)
  {
    printf("complex::complex(double, double) called\n");
  }
  void print()
  {
    printf("(%f,%f)\n", re, im);
  }
};

complex sqrt(complex x, complex y)
{
  printf("sqrt called\n");
  printf("x = "); x.print();
  printf("y = "); y.print();
  return x;
}

int main()
{
  complex a(1);
  printf("a = "); a.print();
  complex b = a;
  printf("b = "); b.print();
  complex c = complex(1,2);
  printf("c = "); c.print();
  complex d = sqrt(b,c);
  printf("d = "); d.print();
  complex e;
  printf("e = "); e.print();
  complex f = 3;
  printf("f = "); f.print();
  return 0;
}
