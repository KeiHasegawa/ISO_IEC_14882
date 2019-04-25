#include <stdio.h>

class A {
public:
  static int a;
  enum { e = 123 };
};

class B : public A {};
class C : public A {};

class D : public B, public C {};


int f(D* pd)
{
  pd->a = 456;
  return pd->e;
}

int main()
{
  D x;
  printf("f return value : %d\n",f(&x));
  printf("A::a = %d\n", A::a);
  return 0;
}

int A::a;
