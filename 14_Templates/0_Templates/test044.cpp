#include <stdio.h>

template<class T> struct B {
  T b;
};

template<class T> struct D : public B<T> {
  T* d;
};

int main()
{
  B<int> bi;
  printf("bi.b = %d\n", bi.b = -1);
  D<double> dd;
  dd.b = 2.0;
  double d;
  dd.d = &d;
  *dd.d = -1.5;
  printf("dd.b = %f, d = %f\n", dd.b, d);

  return 0;
}
