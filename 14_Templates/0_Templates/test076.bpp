#include <stdio.h>

template<class C> struct S;

struct S2 {
  template<class C> void f(const S<C>& s)
  {
    printf("S2::f(const S<C>&) called with s.c = %d\n", s.c);
  }
};

template<class C> struct S {
  C c;
};

int main()
{
  S<int> si;
  si.c = 246;
  S2 s2;
  s2.f(si);
  return 0;
}
