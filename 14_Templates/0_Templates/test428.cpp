#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

struct X {
  int a;
  double b;
};

X x = { 2, 3.5 };

template<class C2, class C3>
void f(C2 C3::* pm)
{
  printf("x.*pm = %f\n", x.*pm);
}

struct Y {
  int c;
  double d;
};

Y y = { 4, 5.5 };

template<class C4>
void f(C4 Y::* pm)
{
  printf("y.*pm = %f\n", y.*pm);
}

int main()
{
  f(1);
  f(&X::b);
  f(&Y::d);
  return 0;
}
