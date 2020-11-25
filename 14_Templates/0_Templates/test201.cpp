#include <stdio.h>

template<class A, class B> struct S1 {
  A a;
  B b;
};

template<class C1> inline C1 f(C1 x)
{
  printf("x.a = %c x.b = %d\n", x.a, x.b);
  return x;
}

template<class A, class B, class D> D f(const S1<A,B>& x, D d)
{
  printf("x.a = %c x.b = %d d = %f\n", x.a, x.b, d);
  return d;
}

template<class T, class A, class B>
S1<A,B> f(const S1<A,B>& x, T t)
{
  printf("x.a = %c x.b = %d t = %s\n", x.a, x.b, t);
  return x;
}

int main()
{
  S1<char, int> x;
  x.a = '1';
  x.b = 2;
  f(x);
  f<char, int, float>(x, 4.0);
  f<const char*, char, int>(x, "foo");
  return 0;
}
