#include <stdio.h>

template<class C1> struct S1 { using T1 = C1; };

template<class C2> using U1 = typename S1<C2>::T1;

template<class...> struct S3;

template<class> struct S4;

template<class... Cn> struct S4<S3<Cn...>> {};

template<class C5> struct S5 : S4<U1<C5>>::T4 {};

template<bool, class = void> struct S6 {};

template<class C6> struct S6<true, C6> { typedef C6 T6; };

template<bool B1, class C7 = void> using U2 = typename S6<B1, C7>::T6;

template<class C8> using U3 = U2<C8::V5>;

template<class C9> struct S7 {
  U3<S5<C9>>* p;
};

template<class C10> struct S4 {
  typedef C10 T4;
};

struct X {
  static const bool V5 = true;
};

int main()
{
  S7<X> x;
  int a = 5678;
  x.p = &a;
  printf("*(int*)x.p = %d\n", *(int*)x.p);
  return 0;
}
