#include <stdio.h>

struct V {
public:
  int f()
  {
    printf("V::f called\n");
    return x;
  }
  int x;
};

struct B : public virtual V {
public:
  int f()
  {
    printf("B::f called\n");
    return x;
  }
  int x;
};

struct C : public virtual V { };

struct D : public B, public C { void g(); };

void h(D* pd)
{
  pd->x--;
  pd->f();
}

void D::g()
{
  x--;
  f();
}

int main()
{
  D d;
  d.x = 1;
  d.V::x = 2;
  printf("d.V::x = %d d.x = %d\n", d.V::x, d.x);
  h(&d);
  printf("d.V::x = %d d.x = %d\n", d.V::x, d.x);
  d.g();
  printf("d.V::x = %d d.x = %d\n", d.V::x, d.x);
  int n = d.f();
  printf("d.V::x = %d d.x = %d d.f() return value : %d\n",
	 d.V::x, d.x, n);
  n = d.V::f();
  printf("d.V::x = %d d.x = %d d.V::f() return value : %d\n",
	 d.V::x, d.x, n);
  return 0;
}
