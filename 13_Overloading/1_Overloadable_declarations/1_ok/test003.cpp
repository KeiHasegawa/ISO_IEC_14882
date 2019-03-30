/*
 * Certain function declarations cannot be overloaded:
 * ...
 * - Parameter declarations that differ only in a pointer * versus an array []
 *   are equivalent. That is, the array declaration is adjusted to become a
 *   pointer declaration (8.3.5). Only the second and subsequent array
 *   dimensions are significant in parameter types (8.3.4).
 * ...
 */
#include <stdio.h>

int f(char*);
int f(char[]); // same as f(char*);
int f(char[7]); // same as f(char*);
int f(char[9]); // same as f(char*);
int g(char(*)[10]);
int g(char[5][10]); // same as g(char(*)[10]);
int g(char[7][10]); // same as g(char(*)[10]);
int g(char(*)[20]); // different from g(char(*)[10]);

int main()
{
  char* p = "Program";
  f(p);
  char a[10] = "language";
  g(&a);
  char b[20] = "C++";
  g(&b);
  return 0;
}

int f(char* s)
{
  printf("`f(char*)' called with \"%s\"\n", s);
  return 0;
}

int g(char (*pa)[10])
{
  printf("`g(char (*)[10])' called with \"%s\"\n", *pa);
  return 0;
}

int g(char (*pa)[20])
{
  printf("`g(char (*)[20])' called with \"%s\"\n", *pa);
  return 0;
}
