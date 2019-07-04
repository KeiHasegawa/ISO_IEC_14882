#include <stdio.h>

class A {
public:
  A()
  {
    printf("A::A() called\n");
  }
  A(int a)
  {
    printf("A::A(int) called with %d\n", a);
  }
};

class B {
public:
  B()
  {
    printf("B::B() called\n");
  }
  B(int b)
  {
    printf("B::B(int) called with %d\n", b);
  }
};

class C : public virtual A, public virtual B {
public:
  C(int c) : A(c), B(c)
  {
    printf("C::C(int) called with %d\n", c);
  }
};

class D : public virtual B, public virtual A {
public:
  D(int d) : B(d), A(d)
  {
    printf("D::D(int) called with %d\n", d);
  }
};

class E : public C, public D {
public:
  E(int e) : C(e), D(e)
  {
    printf("E::E called with %d\n", e);
  }
};

int main()
{
  E e(3);
  return 0;
}
