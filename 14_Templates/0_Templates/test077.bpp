#include <stdio.h>

namespace N {
  template<class C1> struct S;
  class T {
    int m;
  public:
    T(int mm) : m(mm) {}
    template<class C2> friend const S<C2>& f(const T&);
    template<class C3> void g(const S<C3>&);
  };

  template<class C4> void T::g(const S<C4>& sc)
  {
    printf("T::g(const S<C>&) called\n");
    printf("sc.m = %d\n", sc.m);    
  }
}

namespace N {
  template<class C5> struct S {
    int m;
    static S<C5> sc;
  };
  template<class C6> S<C6> S<C6>::sc;
  template<class C7> const S<C7>& f(const T& t)
  {
    printf("f(const T&) called\n");
    S<C7>::sc.m = t.m;
    return S<C7>::sc;
  }
}

int main()
{
  N::T t(3);
  N::f<int>(t);
  printf("N::S<int>::sc.m = %d\n", N::S<int>::sc.m);
  t.g(N::S<int>::sc);
  return 0;
}
