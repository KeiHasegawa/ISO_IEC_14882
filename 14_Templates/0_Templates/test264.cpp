#include <stdio.h>

template<class T1, class T2 = T1&&> T2 f(int n)
{
  printf("n = %d\n", n);
  return n+1;
}

int main()
{
  f<int>(0);
  return 0;
}

