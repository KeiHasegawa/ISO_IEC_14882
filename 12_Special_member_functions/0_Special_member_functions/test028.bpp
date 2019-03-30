#include <stdio.h>

class X {
public:
  virtual ~X()
  {
    printf("X::~X called\n");
  }
};

class XX : public X {
public:
  ~XX()
  {
    printf("XX::~XX called\n");
  }
};

void g()
{
  XX a;
  extern void h(X&);
  h(a);
}

void h(X& a)
{
  printf("enter void h(X&)\n");
  a.X::~X();
  a.~X();
  printf("leave void h(X&)\n");
}

int main()
{
  g();
  return 0;
}
