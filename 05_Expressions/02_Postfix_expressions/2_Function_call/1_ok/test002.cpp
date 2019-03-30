#include <stdio.h>

int main()
{
  int* p = new int;
  *p = 1234;
  printf("*p = %d\n",*p);
  delete p;
  return 0;
}
