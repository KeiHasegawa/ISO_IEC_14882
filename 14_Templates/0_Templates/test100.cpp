#include <stdio.h>

template<class C> struct S1;

template<class U, class V = S1<U> > struct S2;
  
typedef S2<char> X;

template<class C> struct S1 {
  typedef int T1;
};

template<class U, class V> struct S2 {
  typedef typename V::T1 T2;
};

int main()
{
  X::T2 x;
  printf("x = 0x%x\n", x = 0x56789abc);
  return 0;
}
