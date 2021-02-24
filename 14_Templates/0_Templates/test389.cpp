#include <stdio.h>

template<class C1> struct S {
  static int x;
};

int main()
{
  printf("S<char>::x = %d\n", S<char>::x = 1234);
  return 0;
}

template<class C2> int S<C2>::x;
