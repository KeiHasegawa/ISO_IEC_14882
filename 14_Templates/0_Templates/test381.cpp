#include <stdio.h>

template<class C1> C1 f(int);

template<class C2> auto g() -> decltype(f<C2>(0));

template<class C3, class C4> void h()
{
  g<C3 C4::*>();
}

struct X {
  int m;
};

typedef int X::* T;

template<> auto g<T>() -> decltype(f<T>(0))
{
  printf("`g<T>()' called\n");
  return  &X::m;
}

int main()
{
  h<int, X>();
  return 0;
}
