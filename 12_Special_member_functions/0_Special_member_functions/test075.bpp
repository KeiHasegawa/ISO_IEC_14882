#include <stdio.h>

class X {
public:
  X(){}
  X(const X&)
  {
    printf("X::X(const X&) called\n");
  }
};

int f(int ...)
{
  printf("f called\n");
}

void g(X aa)
{
  printf("before f call\n");
  f(1,aa);
  printf("after f call\n");
}

int main()
{
  X a;
  g(a);
  return 0;
}
