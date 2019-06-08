/*
 * The following example shows a function that does not have a unique final
 * overrider:
 */
struct A {
  virtual void f();
};

struct VB1 : virtual A { // note virtual derivation
  void f();
};

struct VB2 : virtual A {
  void f();
};

struct Error : VB1, VB2 { // ill-formed
};

struct Okay : VB1, VB2 {
  void f();
};

struct VB1a : virtual A { // does not declare f
};

struct Da : VB1a, VB2 {
};

void foe()
{
  VB1a* vb1ap = new Da;
  vb1ap->f(); // calls VB2::f
}
