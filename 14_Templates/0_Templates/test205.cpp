#include <stdio.h>

template<bool B, class C1> void f(C1 x)
{
  printf("x = %d\n", x);
}

template<bool B, class C2> void g(C2 x)
{
  f<B>(x);
}

template<bool B, class C3> void g(C3);


int main()
{
  g<true>(3);
  return 0;
}
