#include <stdio.h>

template<class...> struct S1;

template<bool, class = void> struct S2 {};

template<class C1> struct S2<true, C1> { typedef C1 T2; };

template<bool V, class C2 = void> using U1 = typename S2<V, C2>::T2;

template<class... Cn> using U2 = U1<S1<Cn...>::V1>;

template<> struct S1<int> {
  static const bool V1 = true;
};

int main()
{
  U2<int>* x;
  int a = 5678;
  x = &a;
  printf("*(int*)x = %d\n", *(int*)x);
  return 0;
}
