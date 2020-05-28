#include <stdio.h>

struct S {
  S(){}
  template<class C> S(const S& other, C* pc)
  {
    printf("S::S(const S&, C*) called\n");
    *pc = 1234;
  }
};

int main()
{
  S s;
  int a;
  S s2(s,&a);
  printf("a = %d\n", a);
  return 0;
}
