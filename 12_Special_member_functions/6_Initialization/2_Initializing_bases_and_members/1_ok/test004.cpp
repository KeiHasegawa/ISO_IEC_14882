/*
 * Member functions (including virtual member functions, 10.3) can be called
 * for an object under construction. Similarly, an object under construction
 * can be the operand of the typeid operator (5.2.8) or of a dynamic_cast
 * (5.2.7). However, if these operations are performed in a ctor-initializer
 * (or in a function called directly or indirectly from a ctor-initializer)
 * before all the mem-initializers for base classes have completed, the result
 * of the operation is undefined.
 */
#include <stdio.h>

class A {
public:
  A(int);
};
class B : public A {
  int j;
public:
  int f();
  B() : A(f()),    // undefined: calls member function
                   // but base A not yet initialized
	j(f()) { } // well-defined: bases are all initialized
  void g();
};
class C {
public:
  C(int);
};
class D : public B, C {
  int i;
public:
  D() : C(f()),   // undefined: calls member function
	          // but base C not yet initialized
	i(f()) {} // well-defined: bases are all initialized
  void h();
};

/* Here, we define `B::f' not as undefined behavior. */
int main()
{
  D d;
  d.g();
  d.h();
  return 0;
}

A::A(int n)
{
  printf("`A::A(int)' called with %d\n", n);
}

int B::f()
{
  return 5;
}

void B::g()
{
  printf("`B::g()' called\n");
  printf("j = %d\n", j);
}

C::C(int n)
{
  printf("`C::C(int)' called with %d\n", n);
}

void D::h()
{
  printf("`D::h()' called\n");
  printf("i = %d\n", i);
}
