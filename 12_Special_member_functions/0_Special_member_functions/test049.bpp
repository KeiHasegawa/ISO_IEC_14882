#include <stdio.h>

struct Table {
  int (*tbl)[];
  const int max;
  int size;
  Table() : max(64), size(16) {}
};

int main()
{
  Table a;
  printf("a.max = %d, a.size = %d\n", a.max, a.size);
  return 0;
}
