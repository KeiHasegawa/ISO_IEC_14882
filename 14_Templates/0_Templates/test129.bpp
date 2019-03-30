#include <stdio.h>

template<bool B, int N> struct S1 {};

template<bool B, int N> bool operator==(const S1<B,N>&,const S1<B,N>&)
{
  printf("operator==(const S1<B,N>&,const S1<B,N>&) called\n");
  return true;
}

void f(const S1<true,1>& a, const S1<true,1>& b)
{
  a == b;
}

int main()
{
  S1<true,1> a, b;
  f(a,b);
  return 0;
}
