#include <stdio.h>

template<class C> struct outer {
  struct inner {
    int i;
  };
  static inner si;
};

template<class C> typename outer<C>::inner outer<C>::si;

int main()
{
  printf("outer<int>::si.i = %d\n", outer<int>::si.i = 1234);
  return 0;
}
