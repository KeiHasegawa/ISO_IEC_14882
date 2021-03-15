#include <stdio.h>

template<int N1> struct S1 {
  char c[N1];
};

template<class C2> void f(C2 a)
{
  printf("a = %d\n", a);
}

template<int N2> void f(S1<N2> b)
{
  printf("b.c = \"%s\"\n", b.c);
}

int main()
{
  f(5);
  S1<10> s = { "abcdef" };
  f(s);
  return 0;
}
