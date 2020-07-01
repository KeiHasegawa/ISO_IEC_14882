#include <stdio.h>

template<class C> struct S1 {
  S1 operator+(int) const
  {
    printf("S1::operator+(int) called\n");
    S1 r;
    return r;
  }
};

template<class C> struct S2 {
  C c;
  S2(){}
  S2(const C&){}
  S2 operator+(int n) const
  {
    printf("S2::operator+(int) called\n");
    return S2(c+n);
  }
  C& operator*() const
  {
    return c;
  }
  C& operator[](int n) const
  {
    return *(*this + n);    
  }
};

int main()
{
  S2<S1<int> > x;
  int n;
  x + n;
  return 0;
}
