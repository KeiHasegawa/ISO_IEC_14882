#include <stdio.h>

namespace N {
  struct X {
    int i;
    double d;
  };
}

int main()
{
  N::X nx;
  nx.i = 12;
  nx.d = 34.5;
  printf("nx.i = %d, nx.d = %f\n", nx.i, nx.d);

  return 0;
}
