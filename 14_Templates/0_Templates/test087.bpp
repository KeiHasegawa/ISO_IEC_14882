#include <stdio.h>

template<class A> struct S {
  S()
  {
    printf("S::S called\n");
  }
  template<class B> S(const S<B>&)
  {
    printf("S(const S<B>&) called\n");
  }
};

int main()
{
  S<int> si;
  S<double> sd = si;
  return 0;
}
