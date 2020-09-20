#include <stdio.h>

template<class C> struct S {
  static const C x = 1;
  static const C y = 2;
};

template<class C> const C S<C>::x;

template<class C> const C S<C>::y;

int main()
{
  printf("%d %d\n", S<short>::x, S<char>::y);
  return 0;
}
