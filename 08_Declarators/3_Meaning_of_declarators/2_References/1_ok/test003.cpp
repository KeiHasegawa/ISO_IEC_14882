#include <stdio.h>

double& f(double* p, int i)
{
  return p[i];
}

int main()
{
  double d[5];
  
  for (int i = 0 ; i != sizeof d/sizeof d[0] ; ++i)
    f(d, i) = i;

  for (int i = 0 ; i != sizeof d/sizeof d[0] ; ++i)
    printf("d[%d] = %f\n", i, d[i]);

  return 0;
}
