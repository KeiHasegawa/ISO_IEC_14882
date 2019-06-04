/*
 * An explicit or implicit conversion from a pointer to or an lvalue of a
 * derived class to a pointer or reference to one of its base classes shall
 * unambiguously refer to a unique object representing the base class.
 */
#include <stdio.h>

class V {
public:
  int v;
};

class A {
public:
  int a;
};

class B : public A, public virtual V {
public:
  int b;
};

class C : public A, public virtual V {
public:
  int c;
};

class D : public B, public C {
public:
  int d;
};

void h(B* pb, V* pv)
{
  printf("pb->b = %d\n", pb->b);
  printf("pb->a = %d\n", pb->a);
  printf("pb->v = %d\n", pb->v);
  printf("pv->v = %d\n", pv->v);
}

void g()
{
  D d;
  d.d = 1;
  d.B::b = 10;
  d.B::a = 11;
  d.B::v = 12;
  d.C::c = 20;
  d.C::a = 21;
  d.C::v = 22;

  B* pb = &d;
  V* pv = &d; // OK: only one V sub-object
  h(pb,pv);
}

int main()
{
  g();
  return 0;
}
