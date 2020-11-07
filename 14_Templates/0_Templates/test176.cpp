#include <stdio.h>

template<class> struct S1;

template<class C2> struct S2 {
  C2 m2;
  typedef C2 T2;
};

template<class C3> struct S3 : S2<typename S1<C3>::T2>  {
  C3 m3;
  typedef typename S1<C3>::T2 T2;
  T2 f() const { return g(m3); }
  template<class C> static C* g(C* p){ return p; }
  template<class C> static T2 g(C t) { return t.f(); }
};

template<class C1> struct S1 {
  typedef C1 T2;
};

struct X {
  int a;
  X f()
  {
    a = 3;
    printf("X::f() called\n");
    return *this;
  }
};

int main()
{
  S3<X> s3x;
  printf("s3x.m2.a = %d\n", s3x.m2.a = 1);
  printf("s3x.m3.a = %d\n", s3x.m3.a = 2);
  X x = s3x.f();
  printf("x.a = %d\n", x.a);
  return 0;
}
