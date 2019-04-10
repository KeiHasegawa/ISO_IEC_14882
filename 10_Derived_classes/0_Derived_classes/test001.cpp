#include <stdio.h>

class A {
public:
  void f()
  {
    printf("A::f called\n");
  }
};

class B : public A { };

class C : public B {
public:
  bool flag;
  void f();
};

void C::f()
{
  printf("C::f called\n");
  if ( flag ){
    flag = false;
    f();
  }
  A::f();
  B::f();
}

int main()
{
  C cc;
  cc.flag = true;
  cc.f();
  return 0;
}
