#include <stdio.h>

struct S {
  template<class C1> static C1 s;
};

template<class C2> C2 S::s;

int main()
{
  printf("S::s<int> = %d\n", S::s<int> = 5678);
  return 0;
}
