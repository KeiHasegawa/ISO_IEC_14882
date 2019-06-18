#include <stdio.h>

class Vector {
public:
  Vector(int s)
  {
    printf("Vector constructor called %d\n", s);
  }
};

int main()
{
  Vector v(10);
  v = 8;
  return 0;
}
