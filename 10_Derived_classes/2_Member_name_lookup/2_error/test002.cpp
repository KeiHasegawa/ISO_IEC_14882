/*
 * When virtual base classes are used, a hidden declaration can be reached
 * along a path through the sub-object lattice that does not pass through the
 * hiding declaration. This is not an ambiguity. The identical use with
 * nonvirtual base classes is an ambiguity; in that case there is no unique
 * instance of the name that hides all the others.
 */
class V { public: int f(); int x; };

class W { public: int g(); int y; };

class B : public virtual V, public W
{
public:
  int f(); int x;
  int g(); int y;
};

class C : public virtual V, public W { };

class D : public B, public C { void glorp(); };

void D::glorp()
{
  x++; //OK: B::x hides V::x
  f(); //OK: B::f() hides V::f()
  y++; //error: B::y and CÅfs W::y
  g(); //error: B::g() and CÅfs W::g()
}
