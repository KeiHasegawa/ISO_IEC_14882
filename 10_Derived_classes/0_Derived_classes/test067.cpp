#include <stdio.h>

struct V { int a; };
struct A : virtual public V {};
struct B : virtual public V {};
struct D : public A , public B {};

int main()
{
  D d;
  d.V::a = 1;
  printf("d.V::a = %d\n", d.V::a);
  return 0;
}
