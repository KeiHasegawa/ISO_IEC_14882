#include <stdio.h>

class Matherr {
public:
  virtual void vf();
};

void g(int);

void f(int n)
{
  try {
    g(n);
  }
  catch (Matherr& mm) {
    printf("catch Matherr in `f'\n");
    mm.vf();
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

class Overflow : public Matherr {
public:
  void vf();
};

class Underflow : public Matherr {
public:
  void vf();
};

class Zerodivide : public Matherr {
public:
  void vf();
};

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

void Overflow::vf()
{
  printf("Overflow::vf() called\n");
}

void Underflow::vf()
{
  printf("Underflow::vf() called\n");
}

void Zerodivide::vf()
{
  printf("Zerodivide::vf() called\n");
}
