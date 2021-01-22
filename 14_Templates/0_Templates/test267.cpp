#include <stdio.h>

struct B {
  template<class C1, class C2> static void sf(int);
  template<class C3> static void sf();
};

struct D : B {};

int main()
{
  D::sf<int>();
  return 0;
}

template<class C4> void B::sf()
{
  C4 c4 = 1;
  printf("B::sf() called\n");
  printf("c4 = %d\n", c4);
}
