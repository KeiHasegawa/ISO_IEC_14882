#include <stdio.h>

struct Table {
  int tbl[2];
  Table(int tbl0=255, int tbl1=256)
  {
    tbl[0]=tbl0;
    tbl[1]=tbl1;
  }
};

int main()
{
  Table a;
  printf("a.tbl[0] = %d, a.tbl[1] = %d\n", a.tbl[0], a.tbl[1]);
  Table b(-1);
  printf("b.tbl[0] = %d, b.tbl[1] = %d\n", b.tbl[0], b.tbl[1]);
  Table c(-1,-2);
  printf("c.tbl[0] = %d, c.tbl[1] = %d\n", c.tbl[0], c.tbl[1]);

  return 0;
}
