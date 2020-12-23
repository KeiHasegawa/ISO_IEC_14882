#include <stdio.h>

extern "C++" {
  namespace N {
    namespace N2 {
      class C;
    }
    N2::C f();
    namespace N2 {
      class C {
	int m;
	friend C N::f();
      };
    }
  }
}

N::N2::C N::f()
{
  printf("`N::f()' called\n");
  N::N2::C c;
  printf("c.m = %d\n", c.m = 123);
  return c;
}

int main()
{
  N::f();
  return 0;
}
