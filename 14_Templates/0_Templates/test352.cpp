#include <stdio.h>

template<bool, class = int> struct S {};

template<class C> struct S<true, C> { typedef C T; };

int main()
{
  int a = 5678;
  S<true, int>::T* p = &a;
  printf("*p = %d\n", *p);
  return 0;
}
