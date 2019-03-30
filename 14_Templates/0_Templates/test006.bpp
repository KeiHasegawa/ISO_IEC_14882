#include <stdio.h>

template<class T> T max(T a, T b){ return a>b?a:b; };

void f(int a, int b, char c, char d)
{
  int m1 = max(a,b);
  printf("max(%d,%d) return value : %d\n", a, b, m1);
  char m2 = max(c,d);
  printf("max('%c','%c') return value : '%c'\n", c, d, m2);
}

int main()
{
  f(3,-2,'x','A');
  return 0;
}
