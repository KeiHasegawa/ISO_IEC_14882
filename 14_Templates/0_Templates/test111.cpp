#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T;
};

template<class C2> struct S2 {
  typedef typename C2::T T;
};

namespace N {
  template<class C3, class C4> struct S3 : public S1<C3> {};
}

template<class C5> struct S4 : public S1<typename S2<C5>::T> {
};

template<class C7, class C8> struct S5 {
  typedef typename C8::T2 T2;
  typedef N::S3<T2,S5> X;
  typedef S4<X> Y;
};

template<class C9> struct S6 {
  typedef C9* T2;
};

int main()
{
  char a[] = "C++";
  S5<char,S6<char> >::T2 t2 = a;
  printf("t2 = %s\n", t2);
  char b[] = "compiler";
  S5<char,S6<char> >::X::T xt = b;
  printf("xt = %s\n", xt);
  char c[] = "developer";
  S5<char,S6<char> >::Y::T yt = c;
  printf("yt = %s\n", yt);
  return 0;
}
