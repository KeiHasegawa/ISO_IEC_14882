#include <stdio.h>

namespace N {
  template<class C> class X {
  public:
    X(){}
    template<class C2> X(const X<C2>&){}
  };
}

template<class C> struct S {
  N::X<C> m;
  N::X<C> f()
  {
    printf("S<C>::f() called\n");
    return m;
  }
};

int main()
{
  S<int> si;
  si.f();
  return 0;
}
