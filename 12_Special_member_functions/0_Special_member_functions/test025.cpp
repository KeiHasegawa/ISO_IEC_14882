#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  void print()
  {
    printf("x = %d\n", x);
  }
  ~X()
  {
    printf("X::~X called. x = %d\n", x);
  }
};

void g(X* p)
{
  p->print();
}

int main()
{
  X* p = new X(111);
  g(p);
  delete p;
  return 0;
}
