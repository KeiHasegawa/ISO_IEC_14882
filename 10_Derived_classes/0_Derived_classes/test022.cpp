#include <stdio.h>

struct base {
  virtual void vf1();
  virtual void vf2();
  void f();
};

class derived : public base {
public:
  void vf1();
  void vf2(int);
  void f();
};

int main()
{
  derived d;
  base* bp = &d;

  bp->vf1();
  bp->vf2();
  bp->f();

  return 0;
}

void base::vf1()
{
  printf("base::vf1 called\n");
}

void base::vf2()
{
  printf("base::vf2 called\n");
}

void base::f()
{
  printf("base::f called\n");
}

void derived::vf1()
{
  printf("derived::vf1 called\n");
}

void derived::vf2(int a)
{
  printf("derived::vf2 called with %d\n", a);
}

void derived::f()
{
  printf("derived::f called\n");
}
