#include <stdio.h>

template<class> struct S;

template<class C> struct S;

S<int>* f();
void g(S<int>*);

int main()
{
  S<int>* p = f();
  g(p);
  return 0;
}

template<class C> struct S {
  int m;
};

S<int>* f()
{
  S<int>* p = new S<int>();
  p->m = 123;
  return p;
}

void g(S<int>* p)
{
  printf("p->m = %d\n", p->m);
  delete p;
}

