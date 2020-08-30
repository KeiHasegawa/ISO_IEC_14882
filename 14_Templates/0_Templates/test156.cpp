#include <stdio.h>

typedef int T;

template<T N, class C>
struct S {
  C a[N];
};

int main()
{
  S<5, float> s5f;
  for (int i = 0 ; i != sizeof s5f.a/sizeof s5f.a[0] ; ++i)
    printf("%f\n", s5f.a[i] = i+1);
  return 0;
}
