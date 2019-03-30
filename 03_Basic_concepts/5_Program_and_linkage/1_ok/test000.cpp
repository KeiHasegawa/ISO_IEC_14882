#include <stdio.h>

static void f();
static int i = 0; //1
void g() {
  printf("`g' called\n");
  extern void f(); // internal linkage
  int i; //2: i has no linkage
  printf("i = %d\n", i = 5);
  {
    extern void f(); // internal linkage
    extern int i; //3: external linkage
    f();
    i = 4;
  }
}

void f()
{
  printf("`f' called\n");
}

void test000()
{
  printf("`test000' called\n");
  f();
  printf("i = %d\n", i);
  g();
  printf("i = %d\n", i);
}

int main()
{
  test000();
  return 0;
}
