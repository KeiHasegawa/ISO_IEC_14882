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
    printf("X::~X called\n");
    print();
  }
};

void *operator new(size_t, void* p){ return p; }

static char buf[sizeof(X)];

void f(X* p)
{
  p->print();
}

int main()
{
  X* p = new(buf) X(222);
  f(p);
  p->X::~X();
  printf("after explicit destructor call\n");
  return 0;
}
