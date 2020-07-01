#include <stdio.h>

template<class C1> struct S1 {
  S1 operator+(int n)
  {
    printf("S1::operator+(int) called\n");
    return *this;
  }
};

template<class C1> S1<C1> operator+(int n, const S1<C1>& s)
{
  printf("operator+(int, const S1&) called\n");
  return s;
}

template<class C2> struct S2 {
  S2 operator+(int n)
  {
    printf("S2::operator+(int) called\n");
    return *this;
  }
};

template<class C2> S2<C2> operator+(int n, const S2<C2>& s)
{
  printf("operator+(int, const S2&) called\n");
  return s;
}

int main()
{
  S1<int> s1;
  int n = 1;
  s1 + n;
  n + s1;
  S2<int> s2;
  s2 + n;
  n + s2;
  return 0;
}
