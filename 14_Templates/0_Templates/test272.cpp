#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class X1, class X2 = X1&&> X2 f(int);

template<class Y1> auto g() noexcept -> decltype(f<Y1>(0));

template<bool, class C1, class... Cn> struct S2 {};

template<class T1, class... Tn>
struct S2<true, T1, Tn...> : S1<noexcept(T1(g<Tn>()...))> {};

int main()
{
  if (S2<true,int>::V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
