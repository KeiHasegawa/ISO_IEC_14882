#include <stdio.h>

namespace N {
  struct S;
};

struct S2 {
  const struct N::S* f();
};

namespace N {
  struct S {
    int m;
  };
}

const N::S* S2::f()
{
  static N::S ns;
  ns.m = 123;
  return &ns;
}


int main()
{
  S2 s2;
  const N::S* p = s2.f();
  printf("p->m = %d\n", p->m);
  return 0;
}
