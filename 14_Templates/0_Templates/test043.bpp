#include <stdio.h>

template<class T> struct A {
  T* a;
};

template<class T> struct B {
  struct C {
    T c;
  };
  T b;
  C f()
  {
    C r;
    r.c = b;
    return r;
  }
};

template<class T> struct D
  : public A<typename B<T>::C>
{
};

int main()
{
  A<int> x;
  int n;
  x.a = &n;
  *x.a = -1;
  printf("n = %d\n", n);

  B<double> y;
  y.b = 0.5;
  B<double>::C u = y.f();
  printf("u.c = %f\n", u.c);

  D<float> z;
  B<float>::C v;
  z.a = &v;
  z.a->c = 2.0;
  printf("v.c = %f\n", v.c);

  return 0;
}
