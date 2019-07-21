#include <stdio.h>

struct T {
  int mem;
};

void f()
{
  T* p = new T;
  p->mem = 1;
  T* q = new T();
  q->mem = 2;
  T a;
  a.mem = 3;
  T* r = new T(a);
  printf("p->mem = %d, q->mem = %d, r->mem = %d\n",
	 p->mem, q->mem, r->mem);
  delete p;
  delete q;
  delete r;
}

void g()
{
  T a;
  a.mem = 1;
  T b(a);
  T c = a;
  T d();
  printf("a.mem = %d, b.mem = %d, c.mem = %d\n",
	 a.mem, b.mem, c.mem);
}

int main()
{
  f();
  g();
  return 0;
}
