#include <stdio.h>

template<class C> struct S {
  C c;
  typedef C T;
  S(T t) : c(t) {}
};

int main()
{
  S<int> si(3);
  printf("si.c = %d\n", si.c);
  return 0;
}
