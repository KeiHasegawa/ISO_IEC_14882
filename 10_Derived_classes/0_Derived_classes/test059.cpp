#include <stdio.h>

struct T1 { int x; };

struct T2 : virtual public T1 { int y; };

int main()
{
  T1 t1;
  t1.x = -1;
  T2 t2;
  t2.x = -2;
  t2.y = -3;
  printf("t1.x = %d, t2.x = %d, t2.y = %d\n", t1.x, t2.x , t2.y);
  t1 = t2;
  printf("t1.x = %d, t2.x = %d, t2.y = %d\n", t1.x, t2.x , t2.y);
  return 0;
}
