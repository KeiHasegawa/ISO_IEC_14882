#include <stdio.h>

template<class X, class Y> struct C {
  X x;
  Y y;
};

template<class XL, class XR, class Y>
void f(const C<XL, Y>& a, const C<XR, Y>& b)
{
  printf("a.x = %d\n", a.x);
  printf("a.y = %f\n", a.y);
  printf("b.x = %f\n", b.x);
  printf("b.y = %f\n", b.y);
}

int main()
{
  C<int,double> a;
  a.x = 1; a.y = 2;
  C<float,double> b;
  b.x = 3; b.y = 4;
  f(a,b);
  return 0;
}
