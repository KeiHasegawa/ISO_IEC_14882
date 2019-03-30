#include <stdio.h>

struct V {
  virtual void f()
  {
    printf("V::f called\n");
  }
};

struct A : virtual public V {};
struct B : virtual public V {};
struct C : public A, public B {};

void f(V* pv)
{
  pv->f();
}

int main()
{
  A a; f(&a);
  B b; f(&b);
  C c; f(&c);
  return 0;
}
