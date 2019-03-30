#include <stdio.h>

struct B {
  void bf()
  {
    printf("B::bf called\n");
  }
};

struct D : B {
  void df()
  {
    printf("B::df called\n");
  }
};

int main()
{
  D d;
  d.bf();
  d.df();
  return 0;
}
