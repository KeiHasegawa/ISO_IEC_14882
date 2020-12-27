#include <stdio.h>

inline void* operator new(size_t, void* p)
{
  printf("operator new(size_t, void*) called\n");
  return p;
}

struct S {
  int m;
};

void* g()
{
  return new S;
}

void f()
{
  void* p = g();
  void* q = ::new (p) S;
  S* r = (S*)q;
  printf("r->m = %d\n", r->m = 123);
  delete r;
}

int main()
{
  f();
  return 0;
}
