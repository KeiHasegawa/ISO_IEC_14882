/*
 * The return type of an overriding function shall be either identical to the
 * return type of the overridden function or covariant with the classes of the
 * functions. If a function D::f overrides a function B::f, the return types of
 * the functions are covariant if they satisfy the following criteria:
 *   - both are pointers to classes or references to classes
 *   - the class in the return type of B::f is the same class as the class in
 *     the return type of D::f, or is an unambiguous and accessible direct or
 *     indirect base class of the class in the return type of D::f
 *   - both pointers or references have the same cv-qualification and the class
 *     type in the return type of D::f has the same cv-qualification as or less
 *     cv-qualification than the class type in the return type of B::f.
 *
 * If the return type of D::f differs from the return type of B::f, the class
 * type in the return type of D::f shall be complete at the point of
 * declaration of D::f or shall be the class type D. When the overriding
 * function is called as the final overrider of the overridden function, its
 * result is converted to the type returned by the (statically chosen)
 * overridden function (5.2.2).
 */
#include <stdio.h>

class B {};

class D : private B { friend class Derived; };

struct Base {
  virtual void vf1();
  virtual void vf2();
  virtual void vf3();
  virtual B* vf4();
  virtual B* vf5();
  void f();
};

class A;

struct Derived : public Base {
  void vf1(); // virtual and overrides Base::vf1()
  void vf2(int); // not virtual, hides Base::vf2()
  D* vf4(); // OK: returns pointer to derived class
  void f();
};

void g()
{
  Derived d;
  Base* bp = &d; // standard conversion:
                 // Derived* to Base*
  bp->vf1(); // calls Derived::vf1()
  bp->vf2(); // calls Base::vf2()
  bp->f(); // calls Base::f() (not virtual)
  B* p = bp->vf4(); // calls Derived::vf4() and converts the
                    // result to B*
  Derived* dp = &d;
  D* q = dp->vf4(); // calls Derived::vf4() and does not
                    // convert the result to B*
}

int main()
{
  g();
  return 0;
}

void Base::vf1()
{
  printf("`Base::vf1' called\n");
}

void Base::vf2()
{
  printf("`Base::vf2' called\n");
}

void Base::vf3()
{
  printf("`Base::vf3' called\n");
}

B* Base::vf4()
{
  printf("`Base::vf4' called\n");
  static B b;
  return &b;
}

B* Base::vf5()
{
  printf("`Base::vf4' called\n");
  static B b;
  return &b;
}

void Base::f()
{
  printf("`Base::f' called\n");
}

void Derived::vf1()
{
  printf("`Derived::vf1' called\n");
}

void Derived::vf2(int n)
{
  printf("`Derived::vf2' called with %d\n", n);
}

D* Derived::vf4()
{
  printf("`Derived::vf4' called\n");
  static D d;
  return &d;
}

void Derived::f()
{
  printf("`Derived::f' called\n");
}
