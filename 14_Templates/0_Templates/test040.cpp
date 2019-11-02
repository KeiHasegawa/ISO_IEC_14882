#include <stdio.h>

template<class T> struct X {
  struct Y {
    int member;
    Y() : member(-1) {}
  };
};

template<class T> typename X<T>::Y f(const T& a)
{
  printf("a = %d\n", a);
  return typename X<T>::Y();
}

int main()
{
  int a = 1;
  X<int>::Y y = f(a);
  printf("y.member = %d\n", y.member);
  return 0;
}
