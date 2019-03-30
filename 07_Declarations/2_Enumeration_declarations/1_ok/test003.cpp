/*
 * Check integral promtion in enumeration works well
 */
#include <stdio.h>

enum color { red, yellow, green=20, blue };
int i = yellow; // OK: yellow converted to integral value 1
                // integral promotion

int main()
{
  printf("red = %d\n", red);
  printf("yellow = %d\n", yellow);
  printf("green = %d\n", green);
  printf("blue = %d\n", blue);
  printf("i = %d\n", i);
  return 0;
}
