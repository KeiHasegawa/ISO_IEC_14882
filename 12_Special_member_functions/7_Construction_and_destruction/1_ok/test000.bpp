/*
 * For an object of non-POD class type (clause 9), before the constructor
 * begins execution and after the destructor finishes execution, referring to
 * any nonstatic member or base class of the object results in undefined
 * behavior.
 */
#include <stdio.h>

struct X { int i; };
struct Y : X { };
struct A { int a; };
struct B : public A { int j; Y y; };
extern B bobj;
B* pb = &bobj; // OK
int* p1 = &bobj.a; // undefined, refers to base class member
int* p2 = &bobj.y.i; // undefined, refers to member's member
A* pa = &bobj; // undefined, upcast to a base class type
B bobj; // definition of bobj
extern X xobj;
int* p3 = &xobj.i; // OK, X is a POD class
X xobj;

/* I wonder which access causes undefined behavior. */
int main()
{
  printf("pb->j = %d\n",pb->j = 1);
  printf("pb->y.i = %d\n", pb->y.i = 2);
  printf("*p1 = %d\n", *p1 = 3);
  printf("*p2 = %d\n", *p2);
  printf("pa->a = %d\n", pa->a);
  printf("*p3 = %d\n", *p3 = 4);
  return 0;
}
