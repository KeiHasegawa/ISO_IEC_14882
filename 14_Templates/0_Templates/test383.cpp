#include <stdio.h>

template <class> struct S1;

template<bool, class = void> struct S2 {};

template<class C1> struct S2<true, C1> { typedef C1 T2; };

template<bool V2, class C2 = void> using U1 = typename S2<V2, C2>::T2;

template<class C3> U1<S1<C3>::V1> f();

template<class C4> struct S1 {
  static const bool V1 = true;
};

template<> void f<int>()
{
  printf("`f<int>()' called\n");
}

int main()
{
  f<int>();
  return 0;
}
