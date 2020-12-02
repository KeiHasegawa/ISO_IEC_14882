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

template<class C5, class C6> C5 f(C5 (*pf)(C6), C6 x)
{
  return pf(x);
}

double g(int x)
{
  return x + 1;
}

int main()
{
  f<double>(3, 7);
  int a[10];
  int* p = &a[0];
  int* q = &a[10];
  double d = f<double>(p, q);
  printf("d = %f\n", d);
  double d2 = f<double>(g, 3);
  printf("d2 = %f\n", d2);
  return 0;
}
