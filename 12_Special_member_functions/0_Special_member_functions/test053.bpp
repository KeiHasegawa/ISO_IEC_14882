#include <stdio.h>

class V {
public:
  V(){}
  V(int v)
  {
    printf("V::V(int) called with %d\n", v);
  }
};

class A : public virtual V {
public:
  A()
  {
    printf("A::A(void) called\n");
  }
  A(int);
};

class B : public virtual V {
public:
  B()
  {
    printf("B::B(void) called\n");
  }
  B(int);
};

class C : public A, public B, private virtual V {
public:
  C()
  {
    printf("C::C(void) called\n");
  }
  C(int);
};

A::A(int a) : V(a)
{
  printf("A::A(int) called with %d\n", a);
}

B::B(int b)
{
  printf("B::B(int) called with %d\n", b);
}

C::C(int c)
{
  printf("C::C(int) called with %d\n", c);
}

int main()
{
  V v(1);
  A a(2);
  B b(3);
  C c(4);

  return 0;
}
