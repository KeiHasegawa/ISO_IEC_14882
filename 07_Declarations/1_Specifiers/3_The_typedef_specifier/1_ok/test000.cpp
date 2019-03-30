/*
 * Check typedef specifier works well.
 */
#include <stdio.h>

typedef int MILES, *KLICKSP;
MILES distance;
extern KLICKSP metricp;

void f()
{
  metricp = &distance;
  printf("distance = %d\n", distance);
  printf("*metricp = %d\n", *metricp);
  ++distance;
  printf("distance = %d\n", distance);
  printf("*metricp = %d\n", *metricp);
}

int main()
{
  f();
  return 0;
}

KLICKSP metricp;
