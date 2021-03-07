#include <stdio.h>

template<class C1> inline void f(C1& a, C1& b);

template<class C2, int N> inline void f(C2 (&a)[N], C2 (&b)[N]);

template<class C1> inline void f(C1& a, C1& b)
{
  printf("a = %f b = %f\n", a, b);
}

template<class C2, int N> inline void f(C2 (&a)[N], C2 (&b)[N])
{
  for (int i = 0 ; i != N ; ++i)
    printf("%d %d ", a[i], b[i]);
  printf("\n");
}

void f()
{
  double d = 1.0;
  double d2 = -0.5;
  f(d, d2);
  int a[] = { 1, 2, 3 };
  int b[] = { 4, 5, 6 };
  f(a, b);
}

int main()
{
  f();
  return 0;
}
