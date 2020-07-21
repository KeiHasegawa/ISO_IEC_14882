#include <stdio.h>

template<class C> struct S {
  void f(struct X { int m; });
};

int main()
{
  S<int> si;
  printf("just compile test\n");
  return 0;
}
