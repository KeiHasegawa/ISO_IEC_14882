#include <stdio.h>

struct B {
  int b;
  void f();
  virtual void vf();
};

struct D : B {
  double d;
  void g(double);
  void vf();
};

void test000(B* pb)
{
  pb->vf();
}

void test001(B b, void (B::*pm)())
{
  (b.*pm)();
}

void test002(B* pb, void (B::*pm)())
{
  (pb->*pm)();
}

void test003(B* pb)
{
#if 1
  void (B::*pm)() = pb->f;
#else
  void (B::*pm)() = &B::f;
#endif
  test002(pb, pm);
}

void test004(B* pb)
{
#if 1
  void (B::*pm)() = pb->vf;
#else
  void (B::*pm)() = &B::vf;
#endif
  test002(pb, pm);
}

int main()
{
  printf("test000:\n");
  B bobj;
  bobj.b = 1;
  test000(&bobj);
  D dobj;
  dobj.b = 2;
  dobj.d = 3.0;
  test000(&dobj);

  printf("test001:\n");
  test001(bobj, &B::f);
  test001(bobj, &B::vf);

  printf("test002:\n");
  test002(&bobj, &B::f);
  test002(&bobj, &B::vf);
  test002(&dobj, &B::vf);

  printf("test003:\n");
  test003(&bobj);
  test003(&dobj);

  printf("test004:\n");
  test004(&bobj);
  test004(&dobj);
  return 0;
}

void B::f()
{
  printf("B::f() called\n");
  printf("b = %d\n", ++b);
}

void B::vf()
{
  printf("B::vf() called\n");
  printf("b = %d\n", b *= 10);
}

void D::g(double dd)
{
  printf("D::g(double) called with %f", dd);
  printf("d = %f\n", d += dd);
}

void D::vf()
{
  printf("D::vf() called\n");
  printf("b = %d d = %f\n", b, d);
}
