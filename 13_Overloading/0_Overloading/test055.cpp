#include <stdio.h>
#include <stdarg.h>

void f(const char* a, int b, const char* c, ...)
{
  va_list ap;
  va_start(ap, c);
  double d = va_arg(ap, double);
  printf("%s %d %s %f\n", a, b, c, d);
  va_end(ap);
}

void f(const char* a, const char* b, ...)
{
  va_list ap;
  va_start(ap, b);
  int c = va_arg(ap, int);
  printf("%s %s %d\n", a, b, c);
  va_end(ap);
}

int main()
{
  f("abc", 3, "def", 4.0);
  f("efg", "hij", 5);
  return 0;
}
