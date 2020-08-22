#include <stdio.h>

struct X {};
struct Y {};

void f(bool b) throw (X,Y)
{
  b ? throw X() : throw Y();
}

void g(bool b)
{
  try {
    f(b);
  } catch ( X ){
    printf("catch X\n");
  } catch ( Y ){
    printf("catch Y\n");
  }
}

int main()
{
  g(true);
  g(false);
  return 0;
}
