#include <stdio.h>

class Y {
public:
  Y& operator=(int a)
  {
    printf("Y::operator=(int) called with %d\n", a);
    return *this;
  }
  Y(int a)
  {
    printf("Y::Y(int) called with %d\n", a);
  }
};

int main()
{
  Y a = 1;
  Y b = a;
  printf("before assignment a = b\n");
  a = b;
  printf("after assignment a = b\n");
  return 0;
}
