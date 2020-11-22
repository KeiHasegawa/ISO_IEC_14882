#include <stdio.h>

template<int N> struct S {
  int a[N];
};

template<int N> void f(S<N>* p)
{
  for (int i = 0 ; i != N ; ++i)
    printf("p->a[%d] = %d\n", i, p->a[i]);
}

template<int N> void f(S<N>& r)
{
  for (int i = 0 ; i != N ; ++i)
    printf("r.a[%d] = %d\n", i, ++r.a[i]);
}

int main()
{
  S<5> s;
  for (int i = 0 ; i != 5 ; ++i)
    s.a[i] = i;
  f(&s);
  f(s);
  return 0;
}

