#include <stdio.h>

struct V1 {
  virtual void f1()
  {
    printf("V1::f1 called\n");
  }
};

struct V2 {
  virtual void f2()
  {
    printf("V2::f2 called\n");
  }
};

struct A : virtual public V1, virtual public V2 {};
struct B : virtual public V1, virtual public V2 {};
struct C : public A, public B {};

void f(V1* pv1, V2* pv2)
{
  pv1->f1();
  pv2->f2();
}

int main()
{
  A a;
  B b;
  C c;
  f(&a,&a);
  f(&a,&b);
  f(&a,&c);
  f(&b,&a);
  f(&b,&b);
  f(&b,&c);
  f(&c,&a);
  f(&c,&b);
  f(&c,&c);
  return 0;
}
