#include <stdio.h>

namespace N {
  struct S {
    S();
  };
  N::S::S()
  {
    printf("N::S::S called\n");
  }
}

int main()
{
  N::S s;
  return 0;
}
