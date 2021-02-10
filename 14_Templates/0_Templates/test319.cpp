#include <stdio.h>

using U1 = int;

template<class C> struct S {
  using U2 = U1;
};

int main()
{
  S<double>::U2 x;
  printf("x = %d\n", x = 1234);
  return 0;
}
