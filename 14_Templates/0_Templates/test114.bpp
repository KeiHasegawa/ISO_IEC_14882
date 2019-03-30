#include <stdio.h>

template<class C> struct S {
  C m;
  S()
  {
    m = 0x12345678;
    printf("S::S() called\n");
  }
  template<class C2> S(const S<C2>&)
  {
    m = 0x9abcdef0;
    printf("S::S(const S&) called\n");
  }
};

int main()
{
  S<int> x;
  printf("x.m = 0x%x\n", x.m);
  S<int> y = x;
  printf("y.m = 0x%x\n", y.m);
  return 0;
}
