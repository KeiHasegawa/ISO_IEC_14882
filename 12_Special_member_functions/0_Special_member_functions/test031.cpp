#include <stdio.h>
#include <stdlib.h>

class Y {
public:
  void* operator new(size_t sz, int flag)
  {
    printf("Y::operator new called. flag = %d\n", flag);
    return malloc(sz);
  }
};

int main()
{
  Y* p = new(7) Y;
  free(p);
  return 0;
}
