#include <stdio.h>

double f(int sz)
{
  double* p = new double[sz];
  for (int i = 0 ; i != sz ; ++i) {
    p[i] = i;
  }
  double sum = 0;
  for (int i = 0 ; i != sz ; ++i)
    sum += p[i];
  delete [] p;
  return sum;
}

int main()
{
  if (double d = f(256))
    printf("d = %f\n", d);
  else
    printf("error\n");
  return 0;
}
