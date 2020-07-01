#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 P;
};

template<class C2> struct S2 {
  typedef typename C2::P P;
};

template<class C2> struct S2<C2*> {
  typedef C2* P;
};

template<class C3> struct S3 : S1<typename S2<C3>::P> {
  C3 m;
  typedef typename S2<C3>::P P;
  S3() : m() { }
  explicit S3(C3 x) : m(x) { }
  S3(const S3& x) : m(x.m) { }
  template<class X> S3(const S3<X>& x) : m(x.f()) { }
};

template<class C4, class C5> struct S4 : S1<typename S2<C4>::P>
{
  C4 mm;
  typedef typename S2<C4>::P P;
  S4() : mm(C4()) { }
  explicit S4(const C4& i) : mm(i) { }
  template<class X> inline S4(const S4<X, C5>& i) : mm(i.f()) { }
  P operator->() const { return mm; }
  const C4& f() const { return mm; }
};

template<class C7, class C8> struct S5 {
  typedef typename C8::P P;
  typedef S4<P, S5> T4;
  typedef S3<T4> S3;
};

template<class C9> struct S6 {
  typedef C9* P;
};

int main()
{
  S3<S4<char*,S5<char,S6<char> > > >::P p;
  p = "too compilcated sample";
  printf("p = \"%s\"\n", p);
  return 0;
}
