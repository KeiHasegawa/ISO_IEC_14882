/*
 * Any allocation function for a class T is a static member (even if not
 * explicitly declared static).
 */
#include <stdio.h>

class Arena;
struct B {
  void* operator new(size_t, Arena*);
};
struct D1 : B {
};
Arena* ap;
void foo(int i)
{
  new (ap) D1; // calls B::operator new(size_t, Arena*)
  new D1[i]; // calls ::operator new[](size_t)
}

int main()
{
  foo(3);
  return 0;
}

void* B::operator new(size_t sz, Arena* p)
{
  printf("`B::operator new' called\n");
  printf("sz = %d\n", (int)sz);
  printf("p = %x\n", (int)p);
  return p;
}
