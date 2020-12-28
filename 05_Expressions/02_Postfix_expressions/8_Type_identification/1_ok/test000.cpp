#include <stdio.h>
#include <typeinfo>

void f()
{
  class D { public: int d; D(){} };
  D d1;
  const D d2;
  if ( typeid(d1) == typeid(d2) ) // yields true
    printf("ok\n");
  else
    printf("error\n");
  if ( typeid(D) == typeid(const D) ) // yields true
    printf("ok\n");
  else
    printf("error\n");
  if ( typeid(D) == typeid(d2) ) // yields true
    printf("ok\n");
  else
    printf("error\n");
  if ( typeid(D) == typeid(const D&) ) // yields true
    printf("ok\n");
  else
    printf("error\n");
}

int main()
{
  f();
  return 0;
}
