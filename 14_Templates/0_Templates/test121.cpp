#include <stdio.h>

template<class C> struct S {
  S()
  {
    printf("S::S() called\n");
  }
  template<class D> S(D)
  {
    printf("S::S(D) called\n");
  }
  ~S()
  {
    printf("S::~S() called\n");
  }
};

int main()
{
  S<int> si;
  return 0;
}
