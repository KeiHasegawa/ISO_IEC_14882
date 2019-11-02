#include <stdio.h>

template<class A, bool B = false> struct X;

template<class A, bool B> struct X {
  A a;
  A f() const
  {
    if ( B )
      printf("B = true\n");
    else
      printf("B = false\n");
    return a;
  }
};

struct Y {
  char m;
};

int main()
{
  X<int> x1;
  x1.a = 1;
  printf("x1.f() return value : %d\n", x1.f());

  X<double,false> x2;
  x2.a = 2.5;
  printf("x2.f() return value : %f\n", x2.f());

  X<Y,true> x3;
  x3.a.m = 'a';
  Y y = x3.f();
  printf("y.m = '%c'\n", y.m);

  return 0;
}
