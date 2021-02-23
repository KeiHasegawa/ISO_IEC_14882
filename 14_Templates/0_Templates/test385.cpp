#include <stdio.h>

template<class C1> int f(C1& a, C1& b)
{
  return 0;
}

template<class C2> int* f(C2 (&a)[5], C2 (&b)[5])
{
  return 0;
}

template<class C3, class C4> struct S {
  decltype(f(C3(), C4())) m;
};

int main()
{
  printf("ok\n");
  return 0;
}
