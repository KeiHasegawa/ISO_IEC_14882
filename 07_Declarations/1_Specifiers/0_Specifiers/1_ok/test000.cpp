/*
 * Check const qualifier works well.
 */
#include <stdio.h>

typedef char* Pc;
void f(const Pc); // void f(char* const) (not const char*)
void g(const int Pc); // void g(const int)

int main()
{
  f("Programming");
  g(5);
  return 0;
}

void f(const Pc x)
{
  printf("\"%s\"\n", x);
}

void g(const int Pc)
{
  printf("Pc = %d\n", Pc);
}


