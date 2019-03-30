#include <stdio.h>

class outer {
  class inner {
    friend class outer;
    int m;
  };
public:
  void f(inner* p)
  {
    p->m = 123;
  }
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}
