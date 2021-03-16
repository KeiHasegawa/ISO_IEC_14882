#include <stdio.h>

struct X {};

template<class C1> constexpr bool f(X x)
{
  return false;
}

struct Y {};

template<class C2> constexpr bool f(Y y)
{
  return true;
}

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class C3, class C4>
struct S2 : S1<f<C4>(typename C3::T3{})> {};

template<class C5, class C6>
void g(S2<C5,C6> z)
{
  if (z.V1)
    printf("z.V1 is true\n");
  else
    printf("z.V1 is false\n");
}

struct S3X {
  typedef X T3;
};

struct S3Y {
  typedef Y T3;
};

int main()
{
  S2<S3X, int> z1;
  g(z1);
  S2<S3Y, double> z2;
  g(z2);
  return 0;
}
