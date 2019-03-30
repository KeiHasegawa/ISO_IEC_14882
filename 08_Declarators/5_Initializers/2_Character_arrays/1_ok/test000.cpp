/*
 * A char array (whether plain char, signed char, or unsigned char) can be
 * initialized by a stringliteral (optionally enclosed in braces); a wchar_t
 * array can be initialized by a wide string-literal (optionally enclosed in
 * braces); successive characters of the string-literal initialize the members
 * of the array.
 */
#include <stdio.h>

char msg[] = "Syntax error on line %s\n";

void test000(char* s)
{
  printf(msg,s);
}

void test001(char* s)
{
  char msg[] = "Syntax error on line %s\n";
  printf(msg,s);
}

int main()
{
  test000("135");
  test001("246");
  return 0;
}

