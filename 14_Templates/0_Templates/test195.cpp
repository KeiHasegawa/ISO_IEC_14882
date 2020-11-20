#include <stdio.h>

namespace N {
  template<class C1>  struct S1 {
    typedef typename C1::T1 T1;
  };

  template<class> struct S2 {
    enum { V = 0 };
  };

  template<bool B> struct S3 {
    template<class C2> static void f(C2 a)
    {
      printf("a.m = %d\n", a.m);
    }
  };

  template<class C3> void g(C3 a)
  {
    typedef typename S1<C3>::T1 VT1;
    N::S3<S2<VT1>::V>::f(a);
  }
}

struct X {
  typedef int T1;
  T1 m;
};

int main()
{
  X x;
  x.m = 3;
  N::g(x);
  return 0;
}
