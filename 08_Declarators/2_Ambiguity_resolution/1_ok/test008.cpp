#include <stdio.h>

struct T { T(int); };

void f(int a)
{
  T t1();  // function declaration
  T t2(a);  // object definition initialized with `a'

  t1();
}

int main()
{
  f(3);
  return 0;
}

T::T(int a)
{
  printf("T::T(int) called with %d\n", a);
}

T t1()
{
  printf("t1 is called\n");
  T r(4);
  return r;
}
