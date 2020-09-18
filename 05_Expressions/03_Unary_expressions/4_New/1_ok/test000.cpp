#include <stdio.h>

int f(int sz)
{
  double* p = new double[sz];
  int error = 0;
  for (int i = 0 ; i != sz ; ++i) {
    if (p[i])
      ++error;
  }
  delete [] p;
  return error;
}

int main()
{
  if (int n = f(256))
    printf("n = %d\n", n);
  else
    printf("ok\n");
  return 0;
}
