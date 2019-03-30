#include <stdio.h>

class outer {
  struct inner {};
  inner f(){ return inner(); }
};

int main()
{
  printf("just compile test\n");
  return 0;
}
