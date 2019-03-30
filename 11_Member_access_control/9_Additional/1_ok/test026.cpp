#include <stdio.h>

class outer {
  class inner;
  friend class inner;
  static const int sci = 1234;
  class inner {
    static int array[sci];
  };
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}
