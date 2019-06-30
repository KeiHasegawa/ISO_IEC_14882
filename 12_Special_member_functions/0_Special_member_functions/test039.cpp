#include <stdio.h>

class T {
public:
  T(int m)
  {
    printf("m = %d\n", m);
  }
};

void f1(int a)
{
  T x(a);
}

void f2(int a)
{
  T x = a;
}

void f3(int a)
{
  T x = T(a);
}

void f4(int a)
{
  T x = (T)a;
}

int main()
{
  f1(1);
  f2(2);
  f3(3);
  f4(4);
  return 0;
}
