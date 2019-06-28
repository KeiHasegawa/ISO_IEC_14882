#include <stdio.h>
#include <stdlib.h>

class Y {
public:
  void* operator new(size_t s, int flag)
  {
    printf("Y::operator new called. flag = %d\n", flag);
    return malloc(s);
  }
  Y()
  {
    printf("Y::Y called\n");
  }
};

int main()
{
  Y* p = new(3) Y;
  free(p);
  return 0;
}
