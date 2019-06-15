#include <stdio.h>

class X {
public:
  int mem;
  X()
  {
    printf("X constrctor called\n");
  }
  ~X()
  {
    printf("mem = %d\n", mem);
    printf("X destuctor called\n");
  }
};

int main()
{
  X a[3];
  for ( int i = 0; i < 3 ; ++i )
    a[i].mem = i;
  return 0;
}
