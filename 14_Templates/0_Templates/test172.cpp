#include <stdio.h>

template<class> struct S;

struct A {};

template<class C> typename S<C>::T f(C a, C b, A)
{
  typename S<C>::T n = 0;
  while (a != b) {
    ++a;
    ++n;
  }
  return n;
}

struct B {};

template<class C> typename S<C>::T f(C a, C b, B)
{
  return b - a;
}

template<class C> struct S {
  typedef C T;
};

int main()
{
  printf("f(3, 10, A()) return %d\n", f(3, 10, A()));
  printf("f(4.0, 10.0, B()) return %f\n", f(4.0, 10.0, B()));
  return 0;
}
