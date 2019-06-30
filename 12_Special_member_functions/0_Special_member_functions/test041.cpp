#include <stdio.h>

class Vector {
public:
  Vector(int n)
  {
    printf("Vector::Vector called with %d\n", n);
  }
};

class Bignum {
  int n;
public:
  Bignum(int nn) : n(nn) {}
  operator int()
  {
    printf("Bignum::operator int() called\n");
    return n;
  }
};

void f(Bignum b)
{
  Vector v1(b);
  Vector v2 = Vector(b);
}

int main()
{
  f(Bignum(5));
  return 0;
}
