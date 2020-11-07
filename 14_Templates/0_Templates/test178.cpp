#include <stdio.h>

template<class C> struct S {
  C m;
  S() : m() {}
  S(C mm) : m(mm) {}
  template<class C2> S(S<C2>& sc) : m(sc.m) {}
};

template<class C> C f(S<C>& sc){ return sc.m; }

int main()
{
  S<int> si;
  printf("si.m = %d\n", si.m);
  S<int> si2(3);
  printf("si2.m = %d\n", si2.m);
  S<double> sd(si2);
  printf("sd.m = %f\n", sd.m);
  return 0;
}
