#include <stdio.h>

template<class C> struct U {
  C m;
};

template<class C> struct V {
  C m;
};

template<class C> V<C>& f(V<C>& v, U<C>& u, C c)
{
  printf("v.m = %d\n", v.m);
  printf("u.m = %d\n", u.m);
  printf("c = %d\n", c);
  return v;
}

template<class C> V<C>& f(V<C>& v, U<C>& u)
{
  u.m = 1234;
  v.m = 5678;
  return v;
}

int main()
{
  U<int> ui;
  V<int> vi;
  f(vi,ui);
  f(vi,ui,ui.m+vi.m);
  return 0;
}
