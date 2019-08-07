#include <stdio.h>

class V {
public:
  V();
  V(int);
  // ...
};
class A : public virtual V {
public:
  A();
  A(int);
  // ...
};
class B : public virtual V {
public:
  B();
  B(int);
  // ...
};
class C : public A, public B {
public:
  C();
  C(int);
  // ...
};
A::A(int i) : V(i) { printf("`A::A(int)' called with %d\n", i); }
B::B(int i) { printf("`B::B(int)' called with %d\n", i); }
C::C(int i) { printf("`C::C(int)' called with %d\n", i); }

int main()
{
  V v(1); // use V(int)
  A a(2); // use V(int)
  B b(3); // use V()
  C c(4); // use V()
  return 0;
}

V::V()
{
  printf("`V::V()' called\n");
}

V::V(int i)
{
  printf("`V::V(int)' called with %d\n", i);
}

A::A()
{
  printf("`A::A()' called\n");
}

B::B()
{
  printf("`B::B()' called\n");
}

C::C()
{
  printf("`C::C()' called\n");
}
