#include <stdio.h>

template<class C> struct B {
  C x;
};

template<class C> struct D;

template<> struct D<int>;

template<class C> struct D : B<C> {
  C* y;
};

template<> struct D<int> : B<int> {
  int z[5];
};

int main()
{
  D<char> dc;
  printf("dc.x = '%c'\n", dc.x = 'a');
  printf("dc.y = %s\n", dc.y = (char*)"C++");
  D<int> di;
  printf("di.x = %d\n", di.x = 12345);
  for ( int i = 0 ; i < 5 ; ++i )
    printf("di.z[%d] = %d\n", i, di.z[i] = i + 1000);
  return 0;
}

