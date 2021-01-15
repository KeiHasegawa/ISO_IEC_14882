#include <stdio.h>

template<class...> using X = int;

int main()
{
  X<double> xd;
  xd = 1;
  printf("xd = %d\n", xd);
  return 0;
}
