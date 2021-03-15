#include <stdio.h>

template<class T> struct X {
  static T s;
};

int main()
{
  X<int> aa;
  X<int>::s = 1234;
  printf("X<int>::s = %d\n", X<int>::s);
  char a[] = "C++ compiler";
  X<char*>::s = a;
  printf("X<char*>::s = \"%s\"\n", X<char*>::s);
  return 0;
}

int X<int>::s;
char* X<char*>::s;
