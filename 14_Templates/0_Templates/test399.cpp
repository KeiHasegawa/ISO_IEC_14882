#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
  typedef S1<V> T1;
};

template<bool, class C1> struct S2 { typedef C1 T2; };

template <class C2> struct S3 { typedef C2 T3; };

template<class C3, class C4> struct S4 : S2<C3::V1, C4>::T2 {};

template<class C5, class C6 = C5&&> C6 f1(int);

template<class C7> auto declval() -> decltype(f1<C7>(0));

template<class> struct S5 : S1<false> {};

struct S6 {
  template<class C8, class C9> static
  S3<decltype(declval<C9>().*declval<C8>())> sf(int);
  template<class, class> static int sf(...);
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

template<class C15> typename S3<C15>::T3&& f2(C15&& a)
{
  printf("`f2' called\n");
  return static_cast<typename S3<C15>::T3&&>(a);
}

template<class C16> struct S9 : S4<S5<C16>, S5<C16>>::T1 {};

template<class C17> typename S2<S9<C17>::V1, C17&>::T2 f3(C17& x)
{
  printf("`f3' called\n");
  return f2(x);
}

struct X {};

int main()
{
  X x;
  f3(x);
  return 0;
}
