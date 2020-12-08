#include <stdio.h>

template<bool, class> struct S {};

template<class C1> struct S<true, C1> { typedef C1 T; };


template<class> struct pred1 {
  enum { V };
};

template<class> struct pred2 {
  enum { V };
};

template<> struct pred1<int> {
  enum { V = 1 };
};

template<> struct pred2<double> {
  enum { V = 1 };
};

template<class P2, class C2>
typename S<!pred1<C2>::V, void>::T f(P2 a, const C2& v)
{
  printf("v.m = %d\n", v.m);
}

template<class P3, class C3>
typename S<pred1<C3>::V, void>::T f(P3 a,  const C3& v)
{
  printf("v = %d\n", v);
}

template<class C4>
typename S<pred2<C4>::V, void>::T f(C4* a, const C4& v)
{
  printf("*a = %f\n", *a);
  printf("v = %f\n", v);
}

template<class C5> struct X {
  C5 x;
};

template<class C6, class C7> void f(X<C6> a, const C7& v)
{
  printf("a.x = %c\n", a.x);
  printf("v = %s\n", v);
}

struct S2 {
  int m;
};

struct Ptr {};

int main()
{
  S2 s2 = { 1 };
  Ptr ptr;
  f(ptr, s2);
  f(ptr, 2);
  double d = 3.0;
  f(&d, 4.0);
  X<char> xc;
  xc.x = '5';
  f(xc, "hoge");
  return 0;
}
