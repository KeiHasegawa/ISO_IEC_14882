#include <stdio.h>

extern "C" void f();

struct X {};

void g() throw (X);

void h() throw()
{
  printf("enter h\n");
  f();
  g();
  printf("leave h\n");
}

int main()
{
  try {
    h();
  } catch ( ... ){
    printf("catch something in `main'\n");
  }
  return 0;
}

extern "C" void f()
{
  printf("f called\n");
}

void g() throw (X)
{
  printf("g called\n");
  throw X();
}
