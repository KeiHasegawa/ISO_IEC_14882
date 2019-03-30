#include <stdio.h>

template<class C> struct S {
  typedef C* P;
  void f(P p)
  {
    printf("C::f enter\n");
    p->~C();
    printf("C::f leave\n");
  }
};

struct T {
  ~T()
  {
    printf("T::~T called\n");
  }
};

int main()
{
  S<T> s;
  T t;
  s.f(&t);
  return 0;
}
