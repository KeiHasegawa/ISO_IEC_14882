#include <stdio.h>

class A { public: int i; };
class B { public: char* i; };
class C : public A, public B {};

void f(C* cptr)
{
  printf("cptr->A::i = %d\n", cptr->A::i);
  printf("cptr->B::i = %s\n", cptr->B::i);
}

int main()
{
  C c;
  c.A::i = 1234;
  c.B::i = "hasegawa";
  f(&c);
  return 0;
}
