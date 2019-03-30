#include <stdio.h>

template<class C> struct S {
  template<class D> S& f(D)
  {
    printf("f(D) called\n");
    return *this;
  }
};

int main()
{
  S<int> si;
  si.f(3);
  return 0;
}
