#include <stdio.h>

template<class C> struct X {
  typedef double D;
  D m_d;
  typedef C E;
  E m_e;
};

int main()
{
  X<int> xi;
  xi.m_d = 1.5;
  printf("xi.m_d = %f\n", xi.m_d);
  xi.m_e = 3;
  printf("xi.m_e = %d\n", xi.m_e);
  return 0;
}
