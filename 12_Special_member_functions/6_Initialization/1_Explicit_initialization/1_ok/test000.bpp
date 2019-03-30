/*
 * An object of class type can be initialized with a parenthesized
 * expression-list, where the expression-list is construed as an argument list
 * for a constructor that is called to initialize the object. Alternatively, a
 * single assignment-expression can be specified as an initializer using the =
 * form of initialization. Either directinitialization semantics or
 * copy-initialization semantics apply; see 8.5.
 */
#include <stdio.h>

class complex {
public:
  complex();
  complex(double);
  complex(double,double);
  double re, im;
};

complex sqrt(complex,complex);

void f()
{
  complex a(1); // initialize by a call of
                // complex(double)
  printf("a = (%f,%f)\n", a.re, a.im);
  complex b = a; // initialize by a copy of a
  printf("b = (%f,%f)\n", b.re, b.im);
  complex c = complex(1,2); // construct complex(1,2)
                            // using complex(double,double)
                            // copy it into c
  printf("c = (%f,%f)\n", c.re, c.im);
  complex d = sqrt(b,c); // call sqrt(complex,complex)
                         // and copy the result into d
  printf("d = (%f,%f)\n", d.re, d.im);
  complex e; // initialize by a call of
             // complex()
  printf("e = (%f,%f)\n", e.re, e.im);
  complex f = 3; // construct complex(3) using
                 // complex(double)
                 // copy it into f
  printf("f = (%f,%f)\n", f.re, f.im);
}

complex v[6] = { 1,complex(1,2),complex(),2 };

class X {
public:
  int i;
  float f;
  complex c;
} x = { 99, 88.8, 77.7 };

int main()
{
  f();
  for ( int i = 0 ; i != sizeof v/sizeof v[0] ; ++i ){
    printf("v[%d] = (%f,%f)\n", i, v[i].re, v[i].im);
  }
  printf("x = (%d, %f, (%f,%f))\n", x.i, x.f, x.c.re, x.c.im);
  return 0;
}

complex::complex() : re(0), im(0) {}

complex::complex(double r) : re(r), im(0) {}

complex::complex(double r, double i) : re(r), im(i) {}

complex sqrt(complex a, complex b)
{
  a.re += b.re;
  a.im += b.im;
  return a;
}

