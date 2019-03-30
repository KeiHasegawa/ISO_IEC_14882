#include <stdio.h>

template<bool B, int N> struct S1 {};

template<bool B, int N> bool operator==(const S1<B,N>&,const S1<B,N>&)
{
  printf("operator==(const S1<B,N>&,const S1<B,N>&) called\n");
  return true;
}

template<class C> struct S2;

template<class _T1, class _T2> bool operator==(const S2<_T1>&, const S2<_T2>&)
{
  printf("operator==(const S2<_T1>&, const S2<_T2>&) called\n");
  return true;
}

void f(const S2<char>& a, const S2<char>& b)
{
  a == b;
}

template<class C> struct S2 {};

int main()
{
  S2<char> a, b;
  f(a,b);
  return 0;
}
