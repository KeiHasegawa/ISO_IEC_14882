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

struct S3X {
  typedef X T3;
};

struct S3Y {
  typedef Y T3;
};

int main()
{
  if (S2<S3X, int>::V1)
    printf("error\n");
  else
    printf("ok\n");
  if (S2<S3Y, double>::V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
