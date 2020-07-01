#include <stdio.h>

template<class C> struct S {
  struct inner : public C {
    int b;
  };
};

struct T {
  int a;
};

int main()
{
  S<T>::inner x;
  printf("x.a = 0x%x\n", x.a = 0x12345678);
  printf("x.b = 0x%x\n", x.b = 0x9abcdef0);
  return 0;
}
