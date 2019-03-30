#include <stdio.h>

class Matherr { virtual void vf(); };
class Overflow : public Matherr { };
class Underflow : public Matherr { };
class Zerodivide : public Matherr { };

void g(int);

void f(int n)
{
  try {
    g(n);
  }
  catch (Overflow oo) {
    printf("catch Overflow in `f'\n");
  }
  catch (Matherr mm) {
    printf("catch Matherr in `f'\n");
  }
}

int main()
{
  f(0);
  f(1);
  f(2);
  f(3);
  return 0;
}

void g(int n)
{
  switch ( n ){
  case 0: throw Matherr();
  case 1: throw Overflow();
  case 2: throw Underflow();
  default:  throw Zerodivide();
  }
}

void Matherr::vf()
{
  printf("Matherr::vf() called\n");
}
