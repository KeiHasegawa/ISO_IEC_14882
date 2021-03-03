#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
  typedef S1<V> T1;
};

template<bool, class C1> struct S2 { typedef C1 T2; };

template <class C2> struct S3 { typedef C2 T3; };

template<class C5, class C6 = C5&&> C6 f(int);

template<class C7> auto g() -> decltype(f<C7>(0));

template<class> struct S5 : S1<false> {};

template<typename C3>
auto g() -> decltype(f<C3>(0))
{
  return f<C3>(0);
}

struct S6 {
  template<class C8, class C9> static
  S3<decltype(g<C9>().*g<C8>())> sf(int);
};

template<class C10, class C11> struct S7 : S6 {
  typedef decltype(sf<C10, C11>(0)) T7;
};

template<class, class> struct S8;

template<class C12, class C13, class C14>
struct S8<C12 C13::*, C14> {
  typedef C12 C13::* MemPtr;
  typedef typename S2<S5<C13>::V1, S7<MemPtr, C14>>::T2::T1 T8;
};

struct X {
  static const bool V1 = true;
};

template<> struct S7<double X::*, X> {
  typedef int T1;
};

int main()
{
  S8<double X::*, X>::T8 x;
  // C12 => double, C13 => X, C14 => X
  // S5<X>::V1 => true
  // S2<true, S7<MemPtr, X>>::T2 => S7<MemPtr, X>
  printf("x = %d\n", x = 1234);
  return 0;
}
