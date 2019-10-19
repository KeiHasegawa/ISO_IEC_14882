#include <stdio.h>

namespace N {
  typedef float NF;
}

namespace N {
  template<class C> class X {
  public:
    C c;
    NF nf;
  };

  X<int> xi;
}

int main()
{
  N::xi.c = 1234;
  N::xi.nf = 34.5;
  printf("N::xi.c = %d, N::xi.nf = %f\n", N::xi.c, N::xi.nf);
  return 0;
}
