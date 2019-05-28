#include <stdio.h>

struct outer {
  int x;
  int f();
  struct inner {
    int y;
    int g();
  };
};

void f1(int (outer));

int g1(outer);

void f2(int (outer::inner));

int g2(outer::inner);

void f3(int (outer::*));
outer o3;

void f4(int (outer::*)());

void f5(int (outer::inner::*));
outer::inner i5;

void f6(int (outer::inner::*)());

int main()
{
  f1(g1);
  f2(g2);

  o3.x = 789;
  f3(&outer::x);
  printf("o3.x = %d\n", o3.x);

  f4(&outer::f);

  i5.y = 1234;
  f5(&outer::inner::y);
  printf("i5.y = %d\n", i5.y);

  f6(&outer::inner::g);
  return 0;
}

void f1(int (*pf)(outer))
{
  printf("f1 called\n");
  outer o;
  o.x = 123;
  pf(o);
}

int g1(outer o)
{
  printf("g1 called\n");
  printf("o.x = %d\n", o.x);
}

void f2(int (*pf)(outer::inner))
{
  printf("f2 called\n");
  outer::inner i;
  i.y = 456;
  pf(i);
}

int g2(outer::inner i)
{
  printf("g2 called\n");
  printf("i.y = %d\n", i.y);
}

void f3(int (outer::*pm))
{
  printf("f3 called\n");
  o3.*pm = -(o3.*pm);
}

void f4(int (outer::*pf)())
{
  printf("f4 called\n");
  (o3.*pf)();
}

void f5(int (outer::inner::*pm))
{
  printf("f5 called\n");
  i5.*pm = -(i5.*pm);
}

void f6(int (outer::inner::*pf)())
{
  printf("f6 called\n");
  (i5.*pf)();
}

int outer::f()
{
  printf("outer::f called\n");
  printf("x = %d\n", x);
  return 0;
}

int outer::inner::g()
{
  printf("outer::inner::g called\n");
  printf("y = %d\n", y);
  return 0;
}
