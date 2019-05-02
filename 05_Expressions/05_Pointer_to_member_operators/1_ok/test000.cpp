#include <stdio.h>

void f()
{
  struct X {
    void f(int a)
    {
      printf("`X::f' called with %d\n", a);
    }
  };
  X x;
  X* ptr_to_obj = &x;
  void (X::*ptr_to_mfct)(int) = &X::f;
  (ptr_to_obj->*ptr_to_mfct)(10);
}

int main()
{
  f();
  return 0;
}
