#include <stdio.h>

struct T {};

void f(int* pi, T* pt)
{
  printf("entern f\n");
  typedef int I;
  pi->I::~I();
  pt->T::~T();
  printf("leave f\n");
}

int main()
{
  int i;
  T t;
  f(&i,&t);
  return 0;
}
