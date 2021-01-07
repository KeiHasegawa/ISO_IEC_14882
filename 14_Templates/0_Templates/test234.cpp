#include <stdio.h>

template<int N> struct S {
  int a[N];
};

template<int M> using X = S<M>;

int main()
{
  X<5> x;
  for (int i = 0 ; i != sizeof x.a/sizeof x.a[0] ;  ++i)
    printf("%d\n", x.a[i] = i);
  return 0;
}
