#include <stdio.h>

template<class C1> struct S {
  template<class C2> static C2 x;
};

template<class C1>
template<class C2> C2 S<C1>::x;

int main()
{
  printf("S<char>::x<int> = %d\n", S<char>::x<int> = 1234);
  return 0;
}
