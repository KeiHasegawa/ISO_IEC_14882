/*
 * A constructor declared without the function-specifier explicit that can be
 * called with a single parameter specifies a conversion from the type of its
 * first parameter to the type of its class. Such a constructor is called a
 * converting constructor.
 */
#include <stdio.h>

class X {
  int m;
public:
  X(int);
  X(const char*, int =0);
  int get_m() const { return m; }
};

void f(X arg)
{
  if ( arg.get_m() == 3 )
    return;
  X a = 1; // a = X(1)
  printf("a.get_m() = %d\n", a.get_m());
  X b = "Jessie"; // b = X("Jessie",0)
  printf("b.get_m() = %d\n", b.get_m());
  a = 2; // a = X(2)
  printf("a.get_m() = %d\n", a.get_m());
  f(3); // f(X(3))
}

int main()
{
  X x(0);
  f(x);
  return 0;
}

X::X(int n) : m(n) {}

X::X(const char* s, int n) : m(n)
{
  printf("`X::X(const char*, int)' called\n");
  printf("%s\n", s);
}
