/*
 * The form of linkage-specification that contains a brace-enclosed
 * declaration-seq does not affect whether the contained declarations are
 * definitions or not (3.1); the form of linkagespecification directly
 * containing a single declaration is treated as an extern specifier (7.1.1)
 * for the purpose of determining whether the contained declaration is a
 * definition.
 */
#include <stdio.h>

extern "C" int i; // declaration

extern "C" {
  int i; // definition
}

int main()
{
  printf("i = %d\n", i);
  ++i;
  printf("i = %d\n", i);
  return 0;
}

