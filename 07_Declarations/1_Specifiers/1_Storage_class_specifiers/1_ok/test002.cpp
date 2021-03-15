/*
 * Check linkage works well.
 */
#include <stdio.h>

static char* f(); // f() has internal linkage
char* f() // f() still has internal linkage
{
  char* p = (char*)"`f' called\n";
  printf(p);
  return p;
}
char* g(); // g() has external linkage
void h();
inline void h(); // external linkage
inline void l();
void l(); // external linkage
inline void m();
extern void m(); // external linkage
static void n();
inline void n(); // internal linkage
static int a; // a has internal linkage
static int b; // b has internal linkage
extern int b; // b still has internal linkage
int c; // c has external linkage
extern int d; // d has external linkage

int main()
{
  f();
  g();
  h();
  l();
  m();
  n();
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  return 0;
}

char* g()
{
  char* p = (char*)"`g' called\n";
  printf(p);
  return p;
}

inline void h()
{
  printf("`h' called\n");
}

void l()
{
  printf("`l' called\n");
}

extern void m()
{
  printf("`m' called\n");
}

inline void n()
{
  printf("`n' called\n");
}

int d = 2;
