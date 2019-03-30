#include <stdio.h>

struct outer {
  static const int S = 0;
  struct inner {
    int m;
  };
};

template<class C> struct S {
  static outer::inner x;
};

template<class C> outer::inner S<C>::x;

int main()
{
  printf("outer::S = %d\n", outer::S);
  printf("S<double>::x.m = %d\n", S<double>::x.m = 1234);
  return 0;
}
