#include <stdio.h>

template<class C> struct S {
  enum { N = 5 };
  static int f(){ return N; }
};

int main()
{
  printf("S<int>::f() : %d\n", S<int>::f());
  return 0;
}
