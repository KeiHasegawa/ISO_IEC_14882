#include <stdio.h>

class B {
public:
  B& operator=(const B&)
  {
    printf("B::operator= called\n");
    return *this;
  }
};

class D : public B {
};

int main()
{
  D x, y;
  printf("before assignment x = y\n");
  x = y;
  printf("after assignment x = y\n");
  return 0;
}
