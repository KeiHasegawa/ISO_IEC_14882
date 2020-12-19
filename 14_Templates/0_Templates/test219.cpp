#include <stdio.h>

namespace N1 {
  template<class C1> struct S {
    C1 m;
  };
}

namespace N2 {
  template<class C2> struct S : public N1::S<C2> {
    C2* ptr;
  };
}

template<class C3> void f(N2::S<C3> s)
{
  printf("s.m = %d *s.ptr = %d\n", s.m, *s.ptr);
}


int main()
{
  N2::S<int> s;
  s.m = 1;
  int a = 2;
  s.ptr = &a;
  f(s);
  return 0;
}
