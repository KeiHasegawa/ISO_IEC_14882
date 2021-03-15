#include <stdio.h>

template<class C1> struct S1 {
  typedef typename C1::V V;
  typedef typename C1::P P;
};

template<class C2> struct S1<C2*> {
  typedef C2 V;
  typedef C2* P;
};

template<class C3> struct S1<const C3*> {
  typedef C3 V;
  typedef const C3* P;
};

template<class C4, class C5 = C4*> struct S2 {
  typedef C4 V;
  typedef C5 P;
};

template<class C6> struct S3
  : public S2<typename S1<C6>::V, typename S1<C6>::P> {
  C6 m;
  typedef typename S1<C6>::P P;
};

int main()
{
  S3<char*> x;
  S3<char*>::P p;
  char a[] = "C++ is very difficult";
  p = a;
  char b[] = "C is not so difficult";
  x.m = b;
  printf("%s, %s.\n", p, x.m);
  return 0;
}
