#include <stdio.h>

struct S {
  static const int s = 5;
  void f()
  {
    printf("S::f called\n");
  }
};

char a[S::s];

int main()
{
  printf("S::s = %d\n",S::s);
  printf("sizeof(a) = %d\n", sizeof(a));
  S s;
  s.f();
  return 0;
}
