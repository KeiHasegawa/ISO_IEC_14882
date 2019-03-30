#include <stdio.h>

int fseek(FILE*, long, int);

int main()
{
  fseek(0,1,2);
  return 0;
}

int fseek(FILE* a, long b, int c)
{
  printf("`fseek' called\n");
  printf("%x %ld %d\n", (int)a, b, c);
  return 0;
}

