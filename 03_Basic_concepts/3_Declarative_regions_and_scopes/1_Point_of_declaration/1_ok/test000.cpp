/*
 * Specify the declarator as initializer for the same declarator.
 */

#include <stdio.h>

int count;

void f()
{
  int x = 12;
  {
    int x = x;
    if ( x != 12 )
      ++count;
  }
}

void g()
{
  int x = 34;
  {
    int x = x;
    if ( x != 34 )
      ++count;
  }
}

int main()
{
  f();
  g();
  if ( count )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
