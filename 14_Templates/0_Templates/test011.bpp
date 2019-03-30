#include <stdio.h>

template<class T> struct B {
  T mem;
};

template<class T> struct D : public B<T> {};

int main()
{
  D<int> di;
  di.mem = 1;
  printf("di.mem = %d\n", di.mem);

  D<float> df;
  df.mem = 1.5;
  printf("df.mem = %f\n", df.mem);

  return 0;
}
