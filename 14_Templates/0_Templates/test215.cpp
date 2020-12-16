#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> typename S1<C2>::T1 f(C2 a)
{
  return a * 3;
}

template<class C3> void g(C3 a)
{
  typedef typename S1<C3>::T1 T;
  T t = f(a);
  printf("t = %d\n", t);
}

int main()
{
  g(5);
  return 0;
}
