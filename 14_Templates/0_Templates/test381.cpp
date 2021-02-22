#include <stdio.h>

template<class C> C f()
{
  return C(4);
}

template<> int f<int>()
{
  return 5;
}

int main()
{
  printf("f<double>() returns %f\n", f<double>());
  printf("f<int>() returns %d\n", f<int>());
  return 0;
}
