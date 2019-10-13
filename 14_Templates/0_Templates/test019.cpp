#include <stdio.h>

template<class T> struct X {
  T member;
};

int main()
{
  X<int> xi;
  xi.member = 1;
  X<double> xd;
  xd.member = 2;
  printf("xi.member = %d, xd.member = %f\n", xi.member, xd.member);
  return 0;
}
