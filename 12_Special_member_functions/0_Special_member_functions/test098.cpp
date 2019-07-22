#include <stdio.h>

struct S {
  explicit S(int n)
  {
    printf("S(int) called with %d\n", n);
  }
};

int main()
{
  S s(3);
  return 0;
}
