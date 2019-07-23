/*
 * a program may explicitly call, take the address of or form a pointer to
 * member to an implicitly declared special member function.
 */
#include <stdio.h>

struct A { }; // implicitly-declared A::operator=

struct B : A {
  B& operator=(const B &);
};

B& B::operator=(const B& s) {
  printf("`B::operator=' called\n");
  this->A::operator=(s); // well-formed
  return *this;
}

int main()
{
  B b0, b1;
  b0 = b1;
  return 0;
}
