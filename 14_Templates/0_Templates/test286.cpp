#include <stdio.h>

template<int N, class C1, bool BB = (N <= C1::V)>
struct S {
  C1 a[N];
  static const bool B = BB;
};

struct X {
  int x;
  static const int V = 3;
};

int main()
{
  S<2, X> s2x;
  for (int i = 0 ; i != sizeof s2x.a/sizeof s2x.a[0] ; ++i) {
    printf("%d ", s2x.a[i].x = i);
  }
  printf("\n");
  if (s2x.B)
    printf("ok\n");
  else
    printf("error\n");

  S<5, X> s5x;
  for (int i = 0 ; i != sizeof s5x.a/sizeof s5x.a[0] ; ++i) {
    printf("%d ", s5x.a[i].x = i);
  }
  printf("\n");
  if (s5x.B)
    printf("error\n");
  else
    printf("ok\n");

  return 0;
}
