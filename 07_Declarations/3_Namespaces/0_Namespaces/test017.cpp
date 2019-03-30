#include <stdio.h>

class outer {
  static const int s = 1234;
public:
  struct inner_a;
  friend struct inner_a;
  struct inner_b;
  friend struct inner_b;
};

struct outer::inner_a {
  static const int a = s;
};

struct outer::inner_b {
  static const int b = s;
};

int main()
{
  printf("outer::inner_a::a = %d\n", outer::inner_a::a);
  printf("outer::inner_b::b = %d\n", outer::inner_b::b);
  return 0;
}
