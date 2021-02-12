#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> using U1 = typename S1<C2>::T1;

template<class C3> struct S2 { typedef C3 T2; };
template<class C4> struct S3 { typedef C4 T3; };

template<class C5, class C6> struct S5 {
  typedef S2<C6> S26;
  typedef typename S26::T2 T5;
};

template<bool V> struct S4 {
  static const bool V4 = V;
};

template<class C3> struct is_enum : S4<__is_enum(C3)> {};

template<class C13, bool, bool = is_enum<C13>::V4> struct S7 {};

template<class C7> struct S7<C7, true, false> {
  using U2 = typename S3<U1<C7>>::T3;
};

template<class...> struct S9 {};

template<class C8, class... Cn>
struct S9<C8, Cn...> : S9<Cn...>
{ static const int V9 = sizeof(C8); };

template<int N1, class C9, bool = (N1 <= C9::V9)>
struct S10;

template<int N2, class C10, class... Cm>
struct S10<N2, S9<C10, Cm...>, true> { using T10 = C10; };

template<int N3, class C11, class... Ck>
struct S10<N3, S9<C11, Ck...>, false> : S10<N3, S9<Ck...>> {};

template<class C12>
struct S7<C12, false, true> {
  using U4 = S9<char, short, int>;
  using U5 = typename S10<sizeof(C12), U4>::T10;
  using U6 = typename S5<C12, U5>::T5;
};

template<> struct S3<wchar_t> {
  using T3 = typename S7<wchar_t, false, true>::U6;
};

template<class C14, bool, bool _IsEnum = is_enum<C14>::V4> struct S8;

template<class C15> struct S8<C15, true, false> {
  using U7 = typename S2<U1<C15>>::T2;
  using T8 = typename S5<C15, U7>::T5;
};

template<class C16> struct S8<C16, false, true>
{
  typedef typename S7<C16, S4<true>::V4>::U2 S7T;
  typedef typename S8<S7T, S4<true>::V4>::T8 T8;
};

template<> struct S2<wchar_t> {
  using U9 = typename S8<wchar_t, false, true>::T8;
};

int main()
{
  S2<wchar_t>::U9 x;
  printf("x = %d\n", x = 1234);
  return 0;
}
