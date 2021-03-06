#include <stdlib.h>
#include <stdio.h>

void* operator new(size_t sz)
{
  printf("operator new(size_t) called\n");
  return malloc(sz);
}

inline void* operator new(size_t, void* p)
{
  printf("operator new(size_t, void*) called\n");
  return p;
}

int mem;

int main()
{
  int* p = new int(3);
  printf("*p = %d\n", *p);
  free(p);

  int* q = new(&mem) int(4);
  printf("*q = %d\n", *q);

  return 0;
}
