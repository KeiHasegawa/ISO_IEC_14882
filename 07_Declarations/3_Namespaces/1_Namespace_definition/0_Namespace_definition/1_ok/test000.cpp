/*
 * Check variable scope works well in namespace
 */
#include <stdio.h>

namespace Outer {
  int i;
  namespace Inner {
    void f() { i++; } // Outer::i
    int i;
    void g() { i++; } // Inner::i
  }
}

int main()
{
  printf("Outer::i = %d, Outer::Inner::i = %d\n", Outer::i, Outer::Inner::i);
  Outer::Inner::f();
  printf("Outer::i = %d, Outer::Inner::i = %d\n", Outer::i, Outer::Inner::i);
  Outer::Inner::g();
  printf("Outer::i = %d, Outer::Inner::i = %d\n", Outer::i, Outer::Inner::i);
  return 0;
}
