#include <stdio.h>

template<class T> void f(T a, T b)
{
  printf("%s\n", a);
  printf("%s\n", b);
}

void f(char* p, char* q)
{
  printf("f(char*,char*) called\n");
  f((signed char*)p, (signed char*)q);
}

int main()
{
  char x[] = "C++";
  char y[] = "Ada";
  f(x,y);
  return 0;
}
