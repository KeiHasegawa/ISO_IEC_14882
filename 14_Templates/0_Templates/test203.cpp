#include <stdio.h>

template<class C1, class C2> void f(C2 a, C2 b)
{
  C1 x = a + b;
  printf("x = %f\n", x);
}

template<class C3, class C4> C3 f(C4* a, C4* b)
{
  return C4(b-a);
}

int main()
{
  f<double>(3, 7);
  int a[10];
  int* p = &a[0];
  int* q = &a[10];
  double d = f<double>(p, q);
  printf("d = %f\n", d);
  return 0;
}
