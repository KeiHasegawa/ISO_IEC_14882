/*
 * A namespace is an optionally-named declarative region. The name of a
 * namespace can be used to access entities declared in that namespace; that
 * is, the members of the namespace. Unlike other declarative regions, the
 * definition of a namespace can be split over several parts of one or more
 * translation units.
 */
#include <stdio.h>

namespace N {
  int a;
}

namespace N {  // OK
  int b;
}

int main()
{
  printf("N::a = %d\n", N::a = 1);
  printf("N::b = %d\n", N::b = 2);
  return 0;
}
