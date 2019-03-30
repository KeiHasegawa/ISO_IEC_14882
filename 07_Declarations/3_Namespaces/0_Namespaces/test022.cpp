#include <stdio.h>

namespace N1 {
  struct S {
    S()
    {
      printf("N1::S::S called\n");
    }
  };
}

namespace N2 {
  struct S {
    S()
    {
      printf("N2::S::S called\n");
    }
  };
}

int main()
{
  N1::S s1;
  N2::S s2;
  return 0;
}
