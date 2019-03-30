#include <stdio.h>

struct W {
  int w;
protected:
  void _f(){ printf("w = %d\n", w); }
public:
  void f(){ _f(); }
};

struct A : public virtual W {
  int a;
protected:
  void _f(){ printf("a = %d\n", a); }
public:
  void f(){ _f(); W::_f(); }
};

struct B : public virtual W {
  int b;
protected:
  void _f(){ printf("b = %d\n", b); }
public:
  void f(){ _f(); W::_f(); }
};

struct C : public A, public B, public virtual W {
  int c;
protected:
  void _f(){ printf("c = %d\n", c); }
public:
  void f(){ _f(); A::_f(); B::_f(); W::_f(); }
};

void fw()
{
  printf("test of W\n");
  W ww;
  ww.w = 1;
  ww.f();
}

void fa()
{
  printf("test of A\n");
  A aa;
  aa.w = 2;
  aa.a = 3;
  aa.f();
}

void fb()
{
  printf("test of B\n");
  B bb;
  bb.w = 4;
  bb.b = 5;
  bb.f();
}

void fc()
{
  printf("test of C\n");
  C cc;
  cc.w = 6;
  cc.a = 7;
  cc.b = 8;
  cc.c = 9;
  cc.f();
}

int main()
{
  fw();
  fa();
  fb();
  fc();
  return 0;
}
