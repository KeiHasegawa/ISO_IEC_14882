#include <stdio.h>

class Vector {
private:
  Vector(int s)
  {
    printf("Vector constructor called with %d\n", s);
  }
public:
  static Vector make(int s)
  {
    printf("Vector::make called with %d\n", s);
    return Vector(s);
  }
};

int main()
{
  Vector v = Vector::make(10);
  v = Vector::make(8);
  return 0;
}
