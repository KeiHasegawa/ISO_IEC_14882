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

template<class C2>
void f(int C2::* pm)
{
  printf("x.*pm = %d\n", x.*pm);
}

int main()
{
  f(1);
  f(&X::a);
  return 0;
}
