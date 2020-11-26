#include <stdio.h>

template<class C1, class C2> void f(C2 a, C2 b)
{
  C1 x = a + b;
  printf("x = %f\n", x);
}

int main()
{
  f<double>(3, 7);
  return 0;
}
