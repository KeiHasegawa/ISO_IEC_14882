#include <stdio.h>

template<class A, class B, class C> struct S1 {
  A a;
  B b;
  C c;
};

template<class C1> inline C1 f(C1 x)
{
  printf("x.a = %c x.b = %d x.c = %f\n", x.a, x.b, x.c);
  return x;
}

template<class A, class B, class C, class D> D f(const S1<A,B,C>& x, D d)
{
  printf("x.a = %c x.b = %d x.c = %f d = %f\n", x.a, x.b, x.c, d);
  return d;
}

template<class T, class A, class B, class C>
S1<A,B,C> f(const S1<A,B,C>& x, T t)
{
  printf("x.a = %c x.b = %d x.c = %f t = %s\n", x.a, x.b, x.c, t);
  return x;
}

int main()
{
  S1<char, int, double> x;
  x.a = '1';
  x.b = 2;
  x.c = 3.0;
  f(x);
  f<char, int, double, float>(x, 4.0);
  f<const char*, char, int, double>(x, "foo");
  return 0;
}
