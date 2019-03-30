#include <stdio.h>

struct X {
  int a;
  void f()
  {
    printf("this->a = %d\n",this->a);
  }
};

int main()
{
  X x;
  x.a = 5678;
  x.f();
  return 0;
}
