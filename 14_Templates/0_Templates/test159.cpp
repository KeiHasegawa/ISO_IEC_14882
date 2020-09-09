#include <stdio.h>

template<class C> struct S;

template<> struct S<int> {
  int m;
};

void f(S<int>* pi)
{
  printf("pi->m = %d\n", pi->m);
}

int main()
{
  S<int> si;
  si.m = 5;
  f(&si);
  return 0;
}
