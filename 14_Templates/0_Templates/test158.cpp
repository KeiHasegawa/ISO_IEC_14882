#include <stdio.h>

template<class C1, class C2> struct S {
  enum E { x = C1::x + C2::x };
};

struct S1 {
  enum E1 { x };
};

struct S2 {
  enum E2 { x = 1 };
};

struct S3 {
  enum E3 { x = 2 };
};

struct S4 {
  enum E4 { x = 3 };
};

int main()
{
  printf("%d %d\n", S<S1, S2>::x, S<S3, S4>::x);
  return 0;
}


