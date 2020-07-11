#include <stdio.h>

template<class C1, class C2> struct S1;

template<class C> struct S2 {
  typedef S1<C*,S2<C> > T;
  void f(T)
  {
    printf("S2::f(T) called\n");
  }
};

template<class C1, class C2> struct S1 {
  typedef typename C2::T T;
  int a;
};

int main()
{
  S2<int> x;
  S1<int*,S2<int> > y;
  x.f(y);

  S1<int*,S2<int> >::T u;
  printf("u.a = 0x%x\n", u.a = 0x12345678);
  S2<int>::T v;
  printf("v.a = 0x%x\n", v.a = 0x9abcdef0);
  return 0;
}
