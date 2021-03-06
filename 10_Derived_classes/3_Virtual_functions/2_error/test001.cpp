/*
 * virtual functions with multiple base classes
 */
struct A {
  virtual void f();
};

struct B1 : A { // note non-virtual derivation
  void f();
};

struct B2 : A {
  void f();
};

struct D : B1, B2 { // D has two separate A sub-objects
};

void foo()
{
  D d;
  A* p = &d; // would be ill-formed: ambiguous
  B1* b1p = &d;
  A* ap = b1p;
  D* dp = &d;
  ap->f(); // calls D::B1::f
  dp->f(); // ill-formed: ambiguous
}
