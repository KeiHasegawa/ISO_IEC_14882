#include <stdio.h>

void f(char& x, const char& y)
{
  x = y;
}

int main()
{
  char x = 'x';
  char y = 'y';
  printf("%c %c\n", x, y);
  f(x, y);
  printf("%c %c\n", x, y);
  return 0;
}
