#include <stdio.h>

template<class C1> C1 f()
{
  printf("`f' called\n");
  return C1();
}

void g(...)
{
  printf("`g' called\n\n");
}

template<class C2, class... Cn> void h()
{
  g(f<C2>(), f<Cn>()...);
}

int main()
{
  h<char>();
  h<char, int>();
  h<char, int, double>();
  return 0;
}
