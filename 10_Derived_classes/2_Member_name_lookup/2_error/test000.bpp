/*
 * The following steps define the result of name lookup in a class scope, C.
 * First, every declaration for the name in the class and in each of its base
 * class sub-objects is considered. A member name f in one subobject B hides
 * a member name f in a sub-object A if A is a base class sub-object of B.
 * Any declarations that are so hidden are eliminated from consideration. Each
 * of these declarations that was introduced by a using-declaration is
 * considered to be from each sub-object of C that is of the type containing
 * the declaration designated by the using-declaration.96) If the resulting set
 * of declarations are not all from sub-objects of the same type, or the set
 * has a nonstatic member and includes members from distinct sub-objects,
 * there is an ambiguity and the program is ill-formed. Otherwise that set is
 * the result of the lookup.
 */

class A {
public:
  int a;
  int (*b)();
  int f();
  int f(int);
  int g();
};

class B {
  int a;
  int b();
public:
  int f();
  int g;
  int h();
  int h(int);
};

class C : public A, public B {};

void g(C* pc)
{
  pc->a = 1; // error: ambiguous: A::a or B::a
  pc->b(); // error: ambiguous: A::b or B::b
  pc->f(); // error: ambiguous: A::f or B::f
  pc->f(1); // error: ambiguous: A::f or B::f
  pc->g(); // error: ambiguous: A::g or B::g
  pc->g = 1; // error: ambiguous: A::g or B::g
  pc->h(); // OK
  pc->h(1); // OK
}
