/*
 * Note: explicit calls of destructors are rarely needed. One use of such calls
 * is for objects placed at specific addresses using a new-expression with the
 * placement option. Such use of explicit placement and destruction of objects
 * can be necessary to cope with dedicated hardware resources and for writing
 * memory management facilities.
 */
#include <stdio.h>

void* operator new(size_t, void* p) { return p; }
struct X {
  int m;
  X(int);
  ~X();
};

void f(X* p);

void g() // rare, specialized use:
{
  char* buf = new char[sizeof(X)];
  X* p = new(buf) X(222); // use buf[] and initialize
  f(p);
  p->X::~X(); //cleanup
}

int main()
{
  g();
  return 0;
}

X::X(int n) : m(n)
{
}

X::~X()
{
  printf("`X::~X() called\n");
}

void f(X* p)
{
  printf("`f' called\n");
  printf("p->m = %d\n", p->m);
}
