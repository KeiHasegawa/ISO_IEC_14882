/*
 * Check unsigned type specifier works well.
 */
#include <stdio.h>

typedef char* Pc;
void h(unsigned Pc); // void h(unsigned int)
void k(unsigned int Pc); // void k(unsigned int)

int main()
{
  h(3);
  k(4);
  return 0;
}

void h(unsigned Pc)
{
  printf("Pc = %u\n", Pc);
}

void k(unsigned int Pc)
{
  printf("Pc = %u\n", Pc);
}
