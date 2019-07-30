#include <stdio.h>

class X {
public:
  int m;
  X(int);
  X(const X&);
  ~X();
};

X f(X);

void g()
{
  X a(1);
  X b = f(X(2));
  a = f(a);
}

/*
 * Here, an implementation might use a temporary in which to construct X(2)
 * before passing it to f() using X's copy-constructor; alternatively, X(2)
 * might be constructed in the space used to hold the argument. Also, a
 * temporary might be used to hold the result of f(X(2)) before copying it to
 * b using X's copyconstructor; alternatively, f()'s result might be
 * constructed in b. On the other hand, the expression a=f(a) requires a
 * temporary for either the argument a or the result of f(a) to avoid
 * undesired aliasing of a.
 */

int main()
{
  g();
  return 0;
}

X::X(int mm) : m(mm) {}

X::X(const X& x) : m(x.m) {}

X::~X(){}

X f(X x)
{
  printf("`f' called\n");
  printf("x.m = %d\n", x.m);
  return x;
}
