#include <stdio.h>

struct B1 {
  B1(int x)
  {
    printf("B1::B1 called with %d\n", x);
  }
};

struct B2 {
  B2(int x)
  {
    printf("B2::B2 called with %d\n", x);
  }
};

struct D : B1, B2 {
  D(int);
  B1 b;
  const int c;
};

D::D(int a) : B2(a+1), B1(a+2), c(a+3), b(a+4)
{
  printf("D::D called with %d\n", a);
  printf("c = %d\n", c);
  a++;
  printf("a = %d\n", a);
}

int main()
{
  D d(10);
  return 0;
}
