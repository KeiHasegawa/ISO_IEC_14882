/*
 * Check if reference undeclare variable is error at function style cast.
 */
float f(int a)
{
  return double(b) + a;  // error: `b' is undeclared.
}

