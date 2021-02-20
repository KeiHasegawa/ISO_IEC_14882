#include <stdio.h>

template<class> struct S;

template<class C> struct S<double(C)> {
  C a;
};

int main()
{
  S<double(int)> x;
  printf("x.a = %d\n", x.a = 1234);
  return 0;
}
