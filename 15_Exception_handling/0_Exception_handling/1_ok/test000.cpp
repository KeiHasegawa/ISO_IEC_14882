#include <stdio.h>

void f()
{
  throw "Help!";
}

int main()
{
  try {
    f();
  }
  catch(const char* p) {
    printf("%s\n", p);
  }
  return 0;
}
