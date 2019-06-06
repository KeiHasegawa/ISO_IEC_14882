/*
 * A static member, a nested type or an enumerator defined in a base class T
 * can unambiguously be found even if an object has more than one base class
 * subobject of type T. Two base class subobjects share the nonstatic member
 * subobjects of their common virtual base classes.
 */
class V { public: int v; };

class A {
public:
  int a;
  static int s;
  enum { e };
};

class B : public A, public virtual V {};

class C : public A, public virtual V {};

class D : public B, public C { };

void f(D* pd)
{
  pd->v++; //OK: only one v (virtual)
  pd->s++; //OK: only one s (static)
  int i = pd->e; // OK: only one e (enumerator)
  pd->a++; //error, ambiguous: two as in D
}
