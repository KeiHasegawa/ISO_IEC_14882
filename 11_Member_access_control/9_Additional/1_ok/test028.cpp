#include <stdio.h>

class outer {
  class inner_a;
  friend class inner_a;
  class inner_b;
  friend class inner_b;
  static const int s = 1234;
};

class outer::inner_a {
  static const int a = s;
};

class outer::inner_b {
  static const int b = s;
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}
