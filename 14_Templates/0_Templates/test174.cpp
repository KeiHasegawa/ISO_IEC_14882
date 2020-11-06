#include <stdio.h>

struct A {};

struct B {};

template<class C> struct S {
  typedef typename C::T T;
};

template<class C> struct S<C*> {
  typedef int T;
};

template<class C> struct S<const C*> {
  typedef int T;
};

template<class C> typename S<C>::T f(C a, C b, A)
{
  typename S<C>::T n = 0;
  while (a != b) {
    ++a;
    ++n;
  }
  return n;
}

template<class C> typename S<C>::T f(C a, C b, B)
{
  return b - a;
}

struct X {
  typedef int T;
};

int main()
{
  char a[] = "abcdefghijklmn";
  char* p = &a[0];
  char* q = &a[4];
  printf("f(p, q, A()) return %d\n", f(p, q, A())); 
  const char* s = &a[2];
  const char* t = &a[8];
  printf("f(s, t, B()) return %d\n", f(s, t, B())); 
  return 0;
}
