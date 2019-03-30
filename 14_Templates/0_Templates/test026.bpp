#include <stdio.h>

template<class T> class creator {
public:
  static T* create()
  {
    return new T();
  }
};

struct X {
  int mem;
};

int main()
{
  int* pi = creator<int>::create();
  *pi = 5;
  printf("*pi = %d\n", *pi);
  X* px = creator<X>::create();
  px->mem = -3;
  printf("px->mem = %d\n", px->mem);
  return 0;
}
