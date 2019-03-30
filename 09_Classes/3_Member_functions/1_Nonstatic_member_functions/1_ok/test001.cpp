/*
 * A nonstatic member function may be declared const, volatile, or
 * const volatile. These cvqualifiers affect the type of the this pointer
 * (9.3.2). They also affect the function type (8.3.5) of the member function;
 * a member function declared const is a const member function, a member
 * function declared volatile is a volatile member function and a member
 * function declared const volatile is a const volatile member function.
 */
#include <stdio.h>

struct X {
  void g() const;
  void h() const volatile;
};

void fg(const X* p)
{
  p->g();
}

void fh(const volatile X* p)
{
  p->h();
}

int main()
{
  X x;
  fg(&x);
  fh(&x);
  return 0;
}

void X::g() const
{
  printf("`X::g' called\n");
}

void X::h() const volatile
{
  printf("`X::h' called\n");
}
