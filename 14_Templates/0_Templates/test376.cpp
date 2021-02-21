#include <stdio.h>

template<class> struct S1;

template<class C1, class C2, template<class...> class X1, class... Cn>
struct S2 {};

template<class C3, template<class...> class X2, class... Cm>
struct S2<C3, S1<X2<Cm...>>, X2, Cm...> {
  C3 c3;
  X2<C3> xc;
};

template<class C4> struct Y {
  C4 c4;
};

int main()
{
  S2<int, S1<Y<double>>,Y,double> obj;
  printf("obj.c3 = %d, obj.xc.c4 = %d\n", obj.c3 = 1, obj.xc.c4 = 2);
  return 0;
}
