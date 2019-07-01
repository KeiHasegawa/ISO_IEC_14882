#include <stdio.h>

class complex {
  double re, im;
public:
  complex() : re(0), im(0) {}
  complex(double r) : re(r), im(0) {}
  complex(double r, double i) : re(r), im(i) {}
  void print()
  {
    printf("(%f, %f)\n", re, im);
  }
};

int main()
{
  complex v[6] = { 1, complex(1,2), complex(), 2 };
  for ( int i = 0 ; i < sizeof v/sizeof v[0] ; ++i ){
    printf("v[%d] = ", i);
    v[i].print();
  }
  return 0;
}
