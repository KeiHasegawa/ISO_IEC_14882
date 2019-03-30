/*
 * When virtual base classes are used, a hidden declaration can be reached
 * along a path through the sub-object lattice that does not pass through the
 * hiding declaration. This is not an ambiguity. The identical use with
 * nonvirtual base classes is an ambiguity; in that case there is no unique
 * instance of the name that hides all the others.
 */
#include <stdio.h>

class V { public: int f(); int x; };

class W { public: int g(); int y; };

class B : public virtual V, public W
{
public:
  int f(); int x;
  int g(); int y;
};

class C : public virtual V, public W { };

class D : public B, public C { public: void glorp(); };

void D::glorp()
{
  x++; //OK: B::x hides V::x
  printf("B::x = %d, V::x = %d\n", B::x, V::x);
  f(); //OK: B::f() hides V::f()
}

void f()
{
  D d;
  d.B::x = 1;
  d.V::x = 10;
  d.glorp();
}

int main()
{
  f();
  return 0;
}

int V::f()
{
  printf("`V::f' called\n");
  return 1;
}

int W::g()
{
  printf("`W::g' called\n");
  return 2;
}

int B::f()
{
  printf("`B::f' called\n");
  return 3;
}

int B::g()
{
  printf("`B::g' called\n");
  return 4;
}

