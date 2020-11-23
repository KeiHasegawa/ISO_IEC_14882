#include <stdio.h>

namespace N {
  template<bool, class> struct S1 {
    typedef int T2;
  };
}

template<class C2> struct S2 {
  enum { V = 0 };
  typedef C2 T2;
};

template<class C3> struct S3 {
  C3 m;
};

template<class C4>
typename N::S1<S2<C4>::V, S3<C4> >::T2 f(C4*, C4*, S3<C4>)
{
  printf("f(C4*, C4*, S3<C4>) called\n");
  return 0;
}

template<class C5>
typename N::S1<S2<C5>::V, S3<C5> >::T2 f(const C5* p, const C5* q, S3<C5> s)
{
  for ( ; p != q ; ++p) 
    printf("%d ", *p);
  printf("s.m = %d\n", s.m);
  return 0;
}

int main()
{
  int a[3] = { 1, 2, 3 };
  const int* p = &a[0];
  const int* q = &a[3];
  S3<int> s;
  s.m = 4;
  f(p, q, s);
  return 0;
}
