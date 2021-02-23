#include <stdio.h>

template<class C1> struct S {
  template<class C2> static void f(int);
};

template<class C1>
template<class C2> void S<C1>::f(int a)
{
  printf("S<C1>::f(int) called with %d\n", a);
}

int main()
{
  S<char>::f<int>(5);
  return 0;
}
