#include <stdio.h>

template<class C1, class C2 = C1&&> C2 f(int);

template<class C2>
auto g() noexcept -> decltype(f<C2>(0));

struct S1 {
  template<class C3, class C4 = decltype(g<C3&>().~C3())> static int sf(int);
};

int main()
{
  S1::sf<double>(5);
  return 0;
}

template<class C5, class C6>
int S1::sf(int n)
{
  C5 c5 = n;
  printf("n = %d, c5 = %f\n", n, c5);
  return n + 1;
}
