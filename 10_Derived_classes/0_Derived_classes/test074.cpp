/*
 * The base-specifier-list specifies the type of the base class subobjects
 * contained in an object of the derived class type.
 */
#include <stdio.h>

class Base {
public:
  int a, b, c;
};

class Derived : public Base {
public:
  int b;
};

class Derived2 : public Derived {
public:
  int c;
};

void f(Base* pb, Derived* pd, Derived2* pd2)
{
  printf("`f' called\n");
  pb->a = 1;
  pb->b = 2;
  pb->c = 3;
  printf("pb->a = %d, pb->b = %d, pb->c = %d\n",
	 pb->a, pb->b = 2, pb->b = 3);

  pd->a = 4;
  pd->Base::b = 5;
  pd->c = 6;
  pd->b = 7;
  printf("pd->a = %d, pd->Base::b = %d, pd->c = %d, pd->b = %d\n",
	 pd->a, pd->Base::b, pd->c, pd->b);

  pd2->a = 8;
  pd2->Base::b = 9;
  pd2->Base::c = 10;
  pd2->b = 11;
  pd2->c = 12;
  printf("pd2->a = %d, pd2->Base::b = %d, pd2->Base::c = %d\n",
	 pd2->a, pd2->Base::b, pd2->Base::c);
  printf("pd2->b = %d, pd2->c = %d\n",
	 pd2->b, pd2->c);
}

int main()
{
  Base b;
  Derived d;
  Derived2 d2;
  f(&b,&d,&d2);
  return 0;
}
