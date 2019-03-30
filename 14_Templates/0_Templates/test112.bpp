#include <stdio.h>

namespace N1 {
  template<class C1, class C2> struct S1 {
    typedef C1 T1;
    typedef C2 T2;
  };
}

namespace N1 {
  template<class C3> struct S2 {
    typedef typename C3::T1 T1;
    typedef typename C3::T2 T2;
  };

  template<class C4> struct S2<C4*> {
    typedef C4 T1;
    typedef C4* T2;
  };

  template<class C5> struct S2<const C5*> {
    typedef C5 T1;
    typedef const C5* T2;
  };

  namespace N2 {
    template<class C6, class C7> struct S3
      : public S1<typename S2<C6>::T1,typename S2<C6>::T2>
    {
    };
  }

  template<class C8> class S4
    : public S1<typename S2<C8>::T1,typename S2<C8>::T2>
  {
  };
}

namespace N1 {
  template<class C9, class C10> struct S5 {
    typedef typename C10::T3 T3;
    typedef typename C10::T4 T4;
    typedef N2::S3<T3, S5> T5;
    typedef N2::S3<T4, S5> T6;
    typedef N1::S4<T4> T7;
  };
}

namespace N1 {
  template<class C11> struct S6 {
    typedef C11* T3;
    typedef const C11* T4;
  };
}

int main()
{
  N1::S5<char,N1::S6<char> >::T7::T2 x = "This test program is too complicated";
  printf("x = \"%s\"\n", x);
  return 0;
}
