#include <stdio.h>

template<class C> struct S {
  static char* x;
  static char* y;
};

template<class C> char* S<C>::x = 0;

template<class C> char* S<C>::y = 0;

int main()
{
  S<int>::x = "hasegawa";
  S<int>::y = "kei";
  S<float>::x = "C++";
  S<float>::y = "engineer";
  printf("%s %s %s %s\n", S<int>::x, S<int>::y, S<float>::x, S<float>::y);
  return 0;
}
