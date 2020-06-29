#include <stdio.h>

template<class C1> struct B {
  typedef C1 T[3];
};

template<class C2> struct B<C2*> {
  typedef C2* T;
};

template<class C3> struct D : public B<C3> {
  typedef typename B<C3>::T T;
  T f(){ return "D::f() called"; }
};

int main()
{
  D<char*> dpc;
  printf("%s\n", dpc.f());
  return 0;
}
