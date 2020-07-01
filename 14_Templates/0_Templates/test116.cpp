#include <stdio.h>

template<class C> struct S {
  static C x;
  C& operator*() const
  {
    printf("S<C>::operator*() called\n");
    return x;
  }
  static S<C> y;
  S& operator+(int n) const
  {
    printf("S<C>::operator+(int) called\n");
    return y;
  }
  C& operator[](int n) const
  {
    printf("S<C>::operator[](int) called\n");
    return *(*this + n);
  }
};

template<class C> C S<C>::x;
template<class C> S<C> S<C>::y;

int main()
{
  S<int> si;
  si[3];
  return 0;
}
