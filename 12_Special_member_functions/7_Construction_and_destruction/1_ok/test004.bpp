/*
 * Member functions, including virtual functions (10.3), can be called during
 * construction or destruction (12.6.2). When a virtual function is called
 * directly or indirectly from a constructor (including from the
 * mem-initializer for a data member) or from a destructor, and the object to
 * which the call applies is the object under construction or destruction, the
 * function called is the one defined in the constructor or destructorÅfs own
 * class or in one of its bases, but not a function overriding it in a class
 * derived from the constructor or destructor's class, or overriding it in one
 * of the other base classes of the most derived object (1.8). If the virtual
 * function call uses an explicit class member access (5.2.5) and the
 * object-expression refers to the object under construction or destruction
 * but its type is neither the constructor or destructor's own class or one of
 * its bases, the result of the call is undefined.
 */
#include <stdio.h>

class V {
public:
  virtual void f();
  virtual void g();
};
class A : public virtual V {
public:
  virtual void f();
};
class B : public virtual V {
public:
  virtual void g();
  B(V*, A*);
};
class D : public A, B {
public:
  virtual void f();
  virtual void g();
  D() : B((A*)this, this) { }
};
B::B(V* v, A* a) {
  f(); // calls V::f, not A::f
  g(); // calls B::g, not D::g
  v->g(); // v is base of B, the call is well-defined, calls B::g
  a->f(); // undefined behavior, a's type not a base of B
}

int main()
{
  printf("just ok compile test\n");
  return 0;
}

void V::f()
{
  printf("`V::f' called\n");
}

void V::g()
{
  printf("`V::g' called\n");
}

void A::f()
{
  printf("`A::f' called\n");
}

void B::g()
{
  printf("`B::g' called\n");
}

void D::f()
{
  printf("`D::f' called\n");
}

void D::g()
{
  printf("`D::g' called\n");
}
