#include <stdio.h>

template<class X, class Y> struct C {
  X x;
  Y y;
  int f() const { return x + y; }
};

template<class XL, class XR, class Y> inline bool
operator!=(const C<XL, Y>& a, const C<XR, Y>& b)
{
  printf("operator!=(const C<XL, Y>&, const C<XR, Y>&) called\n");
  return a.f() != b.f();
}

template<class X, class Y> inline bool
operator!=(const C<X, Y>& a, const C<X, Y>& b)
{
  printf("operator!=(const C<X, Y>&, const C<X, Y>&) called\n");
  return a.f() != b.f();
}

int main()
{
  C<int,double> a;
  a.x = 1, a.y = 2;
  printf("a.x = %d, a.y = %f\n", a.x, a.y);
  C<float,double> b;
  b.x = 3, b.y = 4;
  printf("b.x = %f, b.y = %f\n", b.x, b.y);
  if ( a != b )
    printf("ok\n");
  else
    printf("error\n");

  C<int,double> c;
  c.x = -5, c.y = 8;
  printf("c.x = %d, c.y = %f\n", c.x, c.y);
  if ( a != c )
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
