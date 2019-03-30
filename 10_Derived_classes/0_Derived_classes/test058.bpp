#include <stdio.h>

class V { public: int f(); int x; };
class B : public virtual V { public: int f(); int x; };
class C : public virtual V { };

class D : public B, public C { void g(); };

void f(D* pd)
{
  pd->V::x++;
  printf("pd->V::f() return value : %d\n", pd->V::f());
}

int main()
{
  D d;
  d.V::x = -1;
  d.x = -2;
  printf("d.V::x = %d, d.x = %d\n", d.V::x, d.x);
  f(&d);
  printf("d.V::x = %d, d.x = %d\n", d.V::x, d.x);
  return 0;
}

int V::f()
{
  printf("V::f called\n");
  return -3;
}
