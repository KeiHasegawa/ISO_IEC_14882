#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class...> struct S2;

template<> struct S2<> : S1<true> {};

template<class C1> struct S2<C1> : C1 {};

template<bool, class = void> struct S3 {};

template<bool VV, class C2 = void> using U1 = typename S3<VV, C2>::T3;

template<class... Cn> using U2 = U1<S2<Cn...>::V1>;

template<class C3> struct S3<true, C3> {
  typedef C3 T3;
};

int main()
{
  int a = 1234;
  U2<S1<true>>* x = (void*)&a;
  printf("*(int*)x = %d\n", *(int*)x);
  return 0;
}
