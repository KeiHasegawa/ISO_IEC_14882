/*
 * A class derived from inner class.
 */
#include <stdio.h>

struct outer {
  struct inner {
    inner(int n)
    {
      printf("outer::inner::inner called\n");
      printf("n = %d\n", n);
    }
  };
};

struct S : outer::inner {
  S(int n) : outer::inner(n)
  {
    printf("S::S called\n");
    printf("n = %d\n", n);
  }
};

int main()
{
  S s(3);
  return 0;
}
