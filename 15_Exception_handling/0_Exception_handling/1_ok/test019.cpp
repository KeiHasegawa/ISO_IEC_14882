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
  catch(const void* p) {
    printf("%s\n", (char*)p);
  }
  return 0;
}
