#include <stdio.h>

template<class C1> struct S {
  static typename C1::T1 f();
  template<class C2> static void g(C2);
  template<class C3, class = decltype(g<C3>(f()))> static void h(int);
};

struct X {
  typedef int T1;
};

template<class C4>
template<class C5, class C6> void S<C4>::h(int a)
{
  printf("S<C4>::h(int) called with %d\n", a);
}

int main()
{
  S<X>::h<int>(5);
  return 0;
}
