#include <stdio.h>

template<class C1> struct S {
  static void f(int);
};

template<class C2>
void S<C2>::f(int a)
{
  printf("S<C2>::f(int) called with %d\n", a);
}

int main()
{
  S<char>::f(5);
  return 0;
}
