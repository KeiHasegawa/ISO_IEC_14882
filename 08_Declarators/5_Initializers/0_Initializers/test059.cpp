#include <stdio.h>

inline int f(int a, int b){ return a + b; }

int x = f(3,5);

int main()
{
  printf("x = %d\n", x);
  return 0;
}

