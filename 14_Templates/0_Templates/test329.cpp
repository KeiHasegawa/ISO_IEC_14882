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

template<class, bool, bool> struct S7 {};

template<class C7> struct S7<C7, true, false> {
  using U2 = typename S3<U1<C7>>::T3;
};

template<class...> struct S9 {};

template<class C8, class... Cn>
struct S9<C8, Cn...> : S9<Cn...>
{ static const int __size = sizeof(C8); };

template<int N1, class C9, bool = (N1 <= C9::__size)>
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

int main()
{
  S7<wchar_t, true, false>::U2 x;
  printf("x = '%c'\n", x = L'a');
  return 0;
}
