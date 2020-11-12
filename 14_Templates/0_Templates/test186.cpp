#include <stdio.h>

template<class C> struct S1 {
  C m;
  typedef typename C::X T;
  void f(T n)
  {
    m - n;
  }
};

template<class C2> void g(S1<C2>& sc, typename C2::X n)
{
  sc.f(n);
}

struct S2 {
  typedef int X;
  S2& operator-(X n)
  {
    printf("S2::operator-(X) called with %d\n", n);
    return *this;
  }
};

int main()
{
  S1<S2> x;
  g(x, 5);
  return 0;
}
