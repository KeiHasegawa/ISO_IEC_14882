#include <stdio.h>

template<class A, class B> void f(A a, B b, const char* fmt)
{
  printf(fmt,a+b);
}

int main()
{
  {
    int a = 1;
    double b = 1.5;
    f(a,b,"%f\n");
  }

  {
    float a = 2.5;
    char b = 'x';
    f(a,b,"%f\n");
  }

  return 0;
}
