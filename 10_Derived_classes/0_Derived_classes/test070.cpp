/*
 * A class derived from inner a class.
 */
#include <stdio.h>

struct outer {
  struct inner {
    int x;
  };
};

struct S : outer::inner {
  int y;
};

int main()
{
  S s;
  printf("s.x = %d\n", s.x = 1);
  printf("s.y = %d\n", s.y = 2);
  return 0;
}
