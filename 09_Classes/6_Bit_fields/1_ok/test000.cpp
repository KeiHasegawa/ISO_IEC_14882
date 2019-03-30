/*
 * If the value true or false is stored into a bit-field of type bool of any
 * size (including a one bit bitfield), the original bool value and the value
 * of the bit-field shall compare equal. If the value of an enumerator is
 * stored into a bit-field of the same enumeration type and the number of bits
 * in the bit-field is large enough to hold all the values of that enumeration
 * type, the original enumerator value and the value of the bit-field shall
 * compare equal.
 */
#include <stdio.h>

enum BOOL { f=0, t=1 };

struct A {
  BOOL b:1;
};

A a;

void g() {
  a.b = t;
  if (a.b == t) // shall yield true
    printf("ok\n");
  else
    printf("error\n");
}

int main()
{
  g();
  return 0;
}
