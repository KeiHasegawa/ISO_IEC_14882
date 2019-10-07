#include <stdio.h>

struct A { }; // implicitly-declared A::operator=

struct B : A {
  B& operator=(const B &);
};

B& B::operator=(const B& s)
{
  printf("B::operator=(const B&) called\n");
  this->A::operator=(s); // well-formed 
  return *this;
}

int main()
{
  B x, y;
  x = y;
  return 0;
}
