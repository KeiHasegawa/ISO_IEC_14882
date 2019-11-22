#include <stdio.h>

template<class C> struct outer {
  struct inner {
    static int si;
  };
};

template<class C> int outer<C>::inner::si;

int main()
{
  printf("outer<double>::inner::si = %d\n",
	 outer<double>::inner::si = 456);
  return 0;
}
