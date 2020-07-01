#include <stdio.h>

template<class A, class B> struct S {
  void f(B b)
  {
    double d = b;
    printf("d = %f\n", d);
  }
  S operator-(const B&) const
  {
    printf("ok : S::operator-(const B&) called\n");
    S r;
    return r;
  }
};

template<class A, class B> S<A,B>
operator-(const S<A,B>& x, const S<A,B>& y)
{
  printf("error : operator-(const S&, const S&) called\n");
  return x;
}

template<class C> struct T {
  C c;
  T(){}
  T(const C&){}
  T operator+(int n) const
  {
    printf("T::operator+(int) called\n");
    return T(c-n);
  }
};

int main()
{
  T<S<char*,int> > x;
  int n;
  x + n;
  S<char*,int> y;
  y.f(3);
  return 0;
}
