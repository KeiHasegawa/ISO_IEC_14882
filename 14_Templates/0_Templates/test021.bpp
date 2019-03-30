#include <stdio.h>

template<class C> C f(C a, C b)
{
  return a + b;
}

template<class C> C g(C a, C b)
{
  return a - b;
}

int main()
{
  {
    int a = 1, b = 2;
    printf("f(%d,%d) return value : %d\n", a, b, f(a,b));
    printf("g(%d,%d) return value : %d\n", a, b, g(a,b));
  }

  {
    float a = 1.5, b = 2.0;
    printf("f(%f,%f) return value : %f\n", a, b, f(a,b));
    printf("g(%f,%f) return value : %f\n", a, b, g(a,b));
  }

  {
    double a = 4.5, b = -0.5;
    printf("f(%f,%f) return value : %f\n", a, b, f(a,b));
    printf("g(%f,%f) return value : %f\n", a, b, g(a,b));
  }

  return 0;
}
