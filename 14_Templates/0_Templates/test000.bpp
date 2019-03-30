#include <stdio.h>

template<class C> C add(C x, C y){ return x + y; }

void f(int a, int b)
{
  printf("add(%d,%d) = %d\n",a,b,add(a,b));
}

void g(float a, float b)
{
  printf("add(%f,%f) = %f\n",a,b,add(a,b));
}

void h(double a, double b)
{
  printf("add(%f,%f) = %f\n",a,b,add(a,b));
}

int main()
{
  f(1,2);
  g(3.4F,5.6F);
  h(7.8,9.0);
  return 0;
}
