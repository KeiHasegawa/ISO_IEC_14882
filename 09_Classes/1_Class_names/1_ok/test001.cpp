/*
 * A class definition introduces the class name into the scope where it is
 * defined and hides any class, object, function, or other declaration of that
 * name in an enclosing scope (3.3). If a class name is declared in a scope
 * where an object, function, or enumerator of the same name is also declared,
 * then when both declarations are in scope, the class can be referred to only
 * using an elaborated-type-specifier (3.4.4).
 */
#include <stdio.h>

struct stat {
  int i;
};

stat gstat; // use plain stat to
            // define variable

int stat(struct stat*); // redeclare stat as function

void f()
{
  struct stat* ps; // struct prefix needed
                   // to name struct stat
                   // ...
  ps = &gstat;
  stat(ps); // call stat()
            // ...
}

int main()
{
  gstat.i = 123;
  f();
  return 0;
}

int stat(struct stat* p)
{
  printf("`stat(struct stat*)' called\n");
  printf("p->i = %d\n", p->i);
  return 0;
}
