/* 
 * first specifies A to be the name of a class and then redefines it as the
 * name of a pointer to an object of that class.
 */
#include <stdio.h>

class A * A;

class A {
public:
  int i;
};

class A x;

int main()
{
  A = &x;
  x.i = 777;
  printf("x.i = %d, A->i = %d\n", x.i, A->i);
  return 0;
}
