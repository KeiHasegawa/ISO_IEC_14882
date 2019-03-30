#include <stdio.h>

template<class C1> struct S1 {
  C1 c1;
  template<class C11> struct S11 {
    typedef S1<C11> T1;
    C11 c11;
  };
};

template<class C2> struct S2 {
  C2 c2;
  struct S22 {
    typedef typename C2::template S11<char>::T1 T2;
    void mem(const C2& a)
    {
      printf("a.c1 = '%c'\n", a.c1);
    }
  };
  S22 s22;
};

int main()
{
  S2< S1<char> > x;
  printf("x.c2.c1 = '%c'\n", x.c2.c1 = 'a');
  S1<char> y;
  y.c1 = 'b';
  x.s22.mem(y);
  S1<int>::S11<char> z;
  printf("z.c11 = '%c'\n", z.c11 = 'c');
  S1<int>::S11<char>::T1 t1;
  printf("t1.c1 = '%c'\n", t1.c1 = 'd');
  S2< S1<char> >::S22::T2 t2;
  printf("t2.c1 = '%c'\n", t2.c1 = 'e');
  return 0;
}
