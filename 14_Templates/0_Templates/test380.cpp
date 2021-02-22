#include <stdio.h>

template<class C> C f();

template<> int f<int>()
{
  return 5;
}

int main()
{
  printf("f<int>() returns %d",  f<int>());
  return 0;
}

