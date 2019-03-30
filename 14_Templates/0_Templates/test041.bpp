#include <stdio.h>

template<class T> struct X {
  T t;
};

template<> struct X<int> {
  char c;
};

int main()
{
  X<double> xd;
  xd.t = 1.0;
  printf("xd.t = %f\n", xd.t);
  X<int> xi;
  xi.c = 'a';
  printf("xi.c = '%c'\n", xi.c);
  return 0;
}
