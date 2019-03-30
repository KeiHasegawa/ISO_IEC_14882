#include <stdio.h>

template<class C> struct S {
  S(){}
  S(const S&);
};

template<class C> S<C>::S(const S&)
{
  printf("S<C>::S(const S&) called\n");
}

int main()
{
  S<int> si;
  S<int> si2 = si;
  return 0;
}
