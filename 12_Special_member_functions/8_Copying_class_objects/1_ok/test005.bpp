/*
 * When certain criteria are met, an implementation is allowed to omit the copy
 * construction of a class object, even if the copy constructor and/or
 * destructor for the object have side effects. In such cases, the
 * implementation treats the source and target of the omitted copy operation as
 * simply two different ways of referring to the same object, and the
 * destruction of that object occurs at the later of the times when the two
 * objects would have been destroyed without the optimization. This elision of
 * copy operations is permitted in the following circumstances (which may be
 * combined to eliminate multiple copies):
 * - in a return statement in a function with a class return type, when the
 *   expression is the name of a non-volatile automatic object with the same
 *   cv-unqualified type as the function return type, the copy operation can be
 *   omitted by constructing the automatic object directly into the function's
 *   return value
 * - when a temporary class object that has not been bound to a reference
 *   (12.2) would be copied to a class object with the same cv-unqualified
 *   type, the copy operation can be omitted by constructing the temporary
 *   object directly into the target of the omitted copy
 */
#include <stdio.h>

class Thing {
public:
  Thing();
  ~Thing();
  Thing(const Thing&);
};
Thing f() {
  Thing t;
  return t;
}
Thing t2 = f();

void g() {
  Thing t2 = f();
}

/*
 * Here the criteria for elision can be combined to eliminate two calls to the
 * copy constructor of class Thing: the copying of the local automatic object
 * t into the temporary object for the return value of function f() and the
 * copying of that temporary object into object t2. Effectively, the
 * construction of the local object t can be viewed as directly initializing
 * the global object t2, and that object's destruction will occur at program
 * exit.
 */

int main()
{
  printf("enter main\n");
  g();
  printf("leave main\n");
  return 0;
}

Thing::Thing(){}

Thing::~Thing(){}

Thing::Thing(const Thing&){}
