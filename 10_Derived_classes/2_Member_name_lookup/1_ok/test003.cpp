/*
 * A static member, a nested type or an enumerator defined in a base class T
 * can unambiguously be found even if an object has more than one base class
 * subobject of type T. Two base class subobjects share the nonstatic member
 * subobjects of their common virtual base classes.
 */
#include <stdio.h>

class V { public: int v; };

class A {
public:
  int a;
  static int s;
  enum { e };
};

class B : public A, public virtual V {};

class C : public A, public virtual V {};

class D : public B, public C { };

void f(D* pd)
{
  pd->v++; //OK: only one v (virtual)
  pd->s++; //OK: only one s (static)
  int i = pd->e; // OK: only one e (enumerator)

  printf("pd->v = %d\n", pd->v);
  printf("pd->s = %d\n", pd->s);
  printf("pd->B::a = %d\n", pd->B::a);
  printf("pd->C::a = %d\n", pd->C::a);
  printf("i = %d\n", i); 
}

int main()
{
  D d;
  d.v = 1;
  d.B::a = 2;
  d.C::a = 3;
  D::s = 4;
  f(&d);
  return 0;
}

int A::s;
