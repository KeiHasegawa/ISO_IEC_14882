#include <stdio.h>

struct B { int m; };

void f(B* pb)
{
  B* pb2 = dynamic_cast<B*>(pb);
  printf("bp2->m = %d\n", pb2->m);
}

int main()
{
  B b = { 1234 };
  f(&b);
  return 0;
}
