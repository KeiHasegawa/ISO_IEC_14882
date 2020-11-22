#include <stdio.h>

template<class C2> struct S2 {
  typedef typename C2::T2 T2;
};

template<bool B1, bool B2, class C3> struct S3 {
  template<class C4, class C5> static C5 f(C4 a, C4 b, C5 c)
  {
    printf("a = %d b = %d c = %d\n", a, b, c);
    return c;
  }
};

template<> struct S3<false, false, int> {
  template<class C6, class C7> static C7 f(C6 a, C6 b, C7 c)
  {
    typedef typename S2<C6>::T2 T3;
    for (T3 __n = b - a ; __n > 0 ; --__n) {
    }
    return c;
  }
};

struct X {
  typedef int T2;
  T2 m;
};

int operator-(const X& a, const X& b)
{
  printf("a.m = %d b.m = %d\n", a, b);
  return 1;
}

int main()
{
  S3<true, true, int>::f(1, 2, 3);
  X a;
  a.m = 1;
  X b;
  b.m = 2;
  S3<false, false, int>::f(a, b, 3);
  return 0;
}
