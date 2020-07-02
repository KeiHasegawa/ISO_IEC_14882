#include <stdio.h>

template<class C> struct S1 {
  int m;
};

typedef S1<int> T;

template<class C> struct S2 {
  typedef T B;
};

template<class B> struct S3 {
  struct D : B {
    D(const B& b) : B(b) {}
  };
};

int main()
{
  S3<S2<char> >::D::B b;
  printf("b.m = 0x%x\n", b.m = 0x12345678);
  return 0;
}
