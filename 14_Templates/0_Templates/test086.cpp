#include <stdio.h>

template<class C> void f();

template<class C> void f()
{
  printf("f<C> called\n");
  printf("sizeof(C) = %d\n", (int)sizeof(C));
}

struct S {
  void g()
  {
    printf("S::g called\n");
  }
};

int main()
{
  f<char>();
  S s;
  s.g();
  return 0;
}
