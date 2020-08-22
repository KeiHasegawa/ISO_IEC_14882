#include <stdio.h>

struct X {};
struct Y {};

void f() throw (X)
{
  throw Y();
}

int main()
{
  try {
    f();
  } catch ( X ){
    printf("catch X\n");
  } catch ( Y ){
    printf("catch Y\n");
  }
  return 0;
}
