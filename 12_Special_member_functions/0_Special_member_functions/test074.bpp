#include <stdio.h>

struct s {
  virtual void f()
  {
    printf("s::f() called\n");
  }
};

struct ss : public s {
  void f()
  {
    printf("ss::f() called\n");
  }
};

int main()
{
  s a;
  ss b;
  a = b;
  a.f();
  b.f();
  (s&)b = a;
  b.f();

  return 0;
}
