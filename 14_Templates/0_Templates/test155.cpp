#include <stdio.h>

typedef int T;

template<class C, T N>
struct S {
  C a[N];
};

int main()
{
  S<float, 5> sf5;
  for (int i = 0 ; i != sizeof sf5.a/sizeof sf5.a[0] ; ++i)
    printf("%f\n", sf5.a[i] = i+1);
  return 0;
}
