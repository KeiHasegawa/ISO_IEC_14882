#include <stdio.h>

template<class C> struct S {
  int a;
};

template<class C> struct S<C*> {
  int b;
};

int main()
{
  S<int> x;
  printf("x.a = 0x%x\n", x.a = 0x12345678);
  S<char*> y;
  printf("y.b = 0x%x\n", y.b = 0x9abcdef0);
  return 0;
}
