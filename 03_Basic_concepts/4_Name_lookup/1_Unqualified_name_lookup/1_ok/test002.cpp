#include <stdio.h>

int i;

namespace A {
  int i;
  namespace N {
    int i;
    void f();
  }
}

void A::N::f() {
  i = 5;
  // The following scopes are searched for a declaration of i:
  // 1) outermost block scope of A::N::f, before the use of i
  // 2) scope of namespace N
  // 3) scope of namespace A
  // 4) global scope, before the definition of A::N::f
}

int main()
{
  A::N::f();
  printf("::i = %d\n", ::i);
  printf("A::i = %d\n", A::i);
  printf("A::N::i = %d\n", A::N::i);
  return 0;
}
