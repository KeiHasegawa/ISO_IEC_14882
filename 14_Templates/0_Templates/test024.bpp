#include <stdio.h>

template<class A, class B> struct X {
  A a;
  B b;
};

struct Y {
  int mem;
};

int main()
{
  X<int,char> u;
  u.a = 1;
  u.b = 'x';
  printf("u.a = %d, u.b = '%c'\n", u.a, u.b);
  X<double,Y> v;
  v.a = 1.5;
  v.b.mem = 2;
  printf("v.a = %f, u.b.mem = %d\n", v.a, v.b.mem);
  return 0;
}
