#include <stdio.h>

template<class C1> struct S1 { using T1 = C1; };

template<class C2> using U1 = typename S1<C2>::T1;

template<class...> struct S3;

template<class> struct S4;

template<class... Cn> struct S4<S3<Cn...>> {};

template<class C5> struct S5 : S4<U1<C5>>::T4 {};

template<class C4> struct S4 { typedef C4 T4; };

struct X {
  int m;
};

int main()
{
  S5<X> x; 
  printf("x.m = %d\n", x.m = 1234);
  return 0;
}
