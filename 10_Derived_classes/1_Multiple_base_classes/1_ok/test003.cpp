/*
 * A class can have both virtual and nonvirtual base classes of a given type.
 */
#include <stdio.h>

class B {
public:
  int b;
};

class X : virtual public B {
public:
  int x;
};

class Y : virtual public B {
public:
  int y;
};

class Z : public B {
public:
  int z;
};

class AA : public X, public Y, public Z {
public:
  int aa;
};

void f(B* pb, X* px, Y* py, Z* pz, AA* paa)
{
  printf("`f' called\n");
  pb->b = 1;
  px->b = 2;
  px->x = 3;
  py->b = 4;
  py->y = 5;
  pz->b = 6;
  pz->z = 7;
  paa->X::b = 8;
  paa->x = 9;
  paa->y = 10;
  paa->z = 11;
  paa->Z::b = 12;
  printf("pb->b = %d\n", pb->b);
  printf("px->b = %d, px->x = %d\n", px->b, px->x);
  printf("py->b = %d, py->y = %d\n", py->b, py->y);
  printf("pz->b = %d, pz->z = %d\n", pz->b, pz->z);
  printf("paa->X::b = %d, paa->x = %d, paa->y = %d\n",
	 paa->X::b, paa->x, paa->y);
  printf("paa->z = %d, paa->Z::b = %d\n",
	 paa->z, paa->Z::b);
}

int main()
{
  B b;
  X x;
  Y y;
  Z z;
  AA aa;
  f(&b,&x,&y,&z,&aa);
  return 0;
}
