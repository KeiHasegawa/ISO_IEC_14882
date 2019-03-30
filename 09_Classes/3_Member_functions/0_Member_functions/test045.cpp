#include <stdio.h>

struct S {
  enum { N = 5 };
  static int f(){ return N; }
};

int main()
{
  printf("S::f() : %d\n", S::f());
  return 0;
}
