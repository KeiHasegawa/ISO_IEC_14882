#include <stdio.h>

template<class C1> struct S1 {
  template<class C11> struct S11 {
    typedef S1<C11> T1;
  };
  void mem();
};

template<class C2> struct S2 {
  struct S22 {
    typedef typename C2::template S11<char>::T1 T2;
    void mem(const C2&);
  };
};

template<class C1> void S1<C1>::mem()
{
  printf("S1<C1>::mem called\n");
}

template<class C2> void S2<C2>::S22::mem(const C2& a)
{
  T2(a).mem();
}

int main()
{
  S1<char> x;
  S2< S1<char> >::S22 y;
  y.mem(x);
  return 0;
}
