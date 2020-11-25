#include <stdio.h>

template<class A> struct S1 {
  A a;
};

template<class C1> inline C1 f(C1 x)
{
  printf("x.a = %c\n", x.a);
  return x;
}

template<class A, class D> D f(const S1<A>& x, D d)
{
  printf("x.a = %c d = %f\n", x.a, d);
  return d;
}

template<class T, class A>
S1<A> f(const S1<A>& x, T t)
{
  printf("x.a = %c t = %s\n", x.a, t);
  return x;
}

int main()
{
  S1<char> x;
  x.a = '1';
  f(x);
  f<char, float>(x, 4.0);
  f<const char*, char>(x, "foo");
  return 0;
}
