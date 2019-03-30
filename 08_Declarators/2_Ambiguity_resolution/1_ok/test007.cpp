#include <stdio.h>

struct T {
  T()
  {
    printf("T::T() called\n");
  }
};

void f()
{
  T t();  // function declaration. not object definition
  t();    // function call
}

int main()
{
  f();
  return 0;
}

T t()
{
  printf("`t' called\n");
  T x;
  return x;
}
