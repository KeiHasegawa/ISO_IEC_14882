#include <stdio.h>

struct T {
  int mem;
};

int main()
{
  T t = T();
  t.mem = 1;
  printf("t.mem = %d\n", t.mem);
  return 0;
}
