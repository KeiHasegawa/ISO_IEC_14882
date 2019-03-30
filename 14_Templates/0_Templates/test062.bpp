#include <stdio.h>

template<class C> struct S {
  S();
};

template<class C> inline S<C>::S()
{
  printf("S<C>::S() called\n");
}

int main()
{
  S<int> si;
  return 0;
}
