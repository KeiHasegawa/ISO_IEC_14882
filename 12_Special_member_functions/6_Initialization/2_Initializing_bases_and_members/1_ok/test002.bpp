/*
 * All sub-objects representing virtual base classes are initialized by the
 * constructor of the most derived class (1.8). If the constructor of the most
 * derived class does not specify a mem-initializer for a virtual base class
 * V, then V's default constructor is called to initialize the virtual base
 * class subobject. If V does not have an accessible default constructor, the
 * initialization is ill-formed. A mem-initializer naming a virtual base class
 * shall be ignored during execution of the constructor of any class that is
 * not the most derived class.
 */
#include <stdio.h>

class V {
public:
  V();
  V(int);
  // ...
};
class A : public virtual V {
public:
  A();
  A(int);
  // ...
};
class B : public virtual V {
public:
  B();
  B(int);
  // ...
};
class C : public A, public B, private virtual V {
public:
  C();
  C(int);
  // ...
};
A::A(int i) : V(i) { /* ... */ }
B::B(int i) { /* ... */ }
C::C(int i) { /* ... */ }
V v(1); // use V(int)
A a(2); // use V(int)
B b(3); // use V()
C c(4); // use V()

int main()
{
  return 0;
}

V::V()
{
  printf("`V::V()' called\n");
}

V::V(int)
{
  printf("`V::V(int)' called\n");
}

A::A()
{
  printf("`A::A()' called\n");
}

B::B()
{
  printf("`B::B()' called\n");
}

C::C()
{
  printf("`C::C()' called\n");
}
