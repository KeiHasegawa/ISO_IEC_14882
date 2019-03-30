/*
 * Check if reference undeclare variable is error at function style cast.
 */

void f()
{
  int (n+1);  // error. undeclared.
}
