#include <stdio.h>

template<class T> T* create()
{
  return new T;
}

struct X {
  int mem;
};

int main()
{
  int* pi = create<int>();
  *pi = 1;
  printf("*pi = %d\n", *pi);
  delete pi;
  X* px = create<X>();
  px->mem = 2;
  printf("px->mem = %d\n", px->mem);
  delete px;
  return 0;
}
