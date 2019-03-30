#include <stdio.h>

template<class C> struct S1 {
  typedef int T;
};

template<class C> struct S2 {
  typename C::T mem;
};

int main()
{
  S2<S1<char> > x;
  printf("x.mem = 0x%x\n", x.mem = 0x12345678);
  return 0;
}
