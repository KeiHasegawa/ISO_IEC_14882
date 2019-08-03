/*
 * In an explicit destructor call, the destructor name appears as a . followed
 * by a type-name that names the destructor's class type. The invocation of a
 * destructor is subject to the usual rules for member functions (9.3), that
 * is, if the object is not of the destructor' s class type and not of a class
 * derived from the destructor's class type, the program has undefined behavior
 * (except that invoking delete on a null pointer has no effect).
 */
#include <stdio.h>

struct B {
  virtual ~B() { printf("`B::~B' called\n"); }
};

struct D : B {
  ~D() { printf("`D::~D' called\n"); }
};

D D_object;
typedef B B_alias;
B* B_ptr = &D_object;
void f() {
  D_object.B::~B(); // calls B's destructor
  printf("\n");
  B_ptr->~B(); //calls D's destructor
  printf("\n");
  B_ptr->~B_alias(); // calls D's destructor
  printf("\n");
  B_ptr->B_alias::~B(); // calls B's destructor
  printf("\n");
}

int main()
{
  f();
  return 0;
}
