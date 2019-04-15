#include <stdio.h>

struct B { int b; };
struct X : virtual public B { int x; };
struct Y : virtual public B { int y; };
struct Z : public B { int z; };
struct AA : public X, public Y, public Z { int aa; };

int main()
{
  AA a;
  a.X::b = 1;
  a.x = 2;
  a.y = 3;
  a.Z::b = 4;
  a.z = 5;
  a.aa = 6;
  printf("a.X::b = %d a.x = %d a.y = %d a.Z::b = %d a.z = %d a.aa = %d\n",
	 a.X::b, a.x, a.y, a.Z::b, a.z, a.aa);
  printf("a.Y::b = %d\n", a.Y::b);
  return 0;
}
