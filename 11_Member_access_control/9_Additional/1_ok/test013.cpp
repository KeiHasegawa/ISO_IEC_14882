#include <stdio.h>

class T;

extern "C" void interface_function(T*);

class T {
  int t;
  friend void interface_function(T*);
};

extern "C" void interface_function(T* pt)
{
  pt->t = 1;
  printf("pt->t = %d\n", pt->t);
}

int main()
{
  T t;
  interface_function(&t);
  return 0;
}
