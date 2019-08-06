#include <stdio.h>

struct S {
  int m;
  static int cnt;
  S() : m(++cnt) { printf("S::S() called. m = %d\n", m); }
  ~S(){ printf("S::~S() called. m = %d\n", m); }
};

int S::cnt;

S* f(int n)
{
  return new S[n];
}

void g(S* p)
{
  delete [] p;
}

int main()
{
  int n = 5;
  S* p = f(n);
  for (int i = 0 ; i != n; ++i)
    printf("p[%d].m = %d\n", i, p[i].m);
  g(p);
  return 0;
}

