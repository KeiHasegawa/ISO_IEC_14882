#include <stdio.h>

template<class X> struct outer {
  X x;
  template<class Y> struct inner {
    Y y;
    typedef outer<Y> T;
  };
};

int main()
{
  outer<int> oi;
  printf("oi.x = %d\n", oi.x = 1);
  outer<float>::inner<double> id;
  printf("id.y = %f\n", id.y = 2);
  outer<char>::inner<int>::T t;
  printf("t.x = '%c'\n", t.x = 'a');
  return 0;
}
