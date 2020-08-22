#include <stdio.h>
#include <string.h>

struct Foo {
  char* p;
  Foo(char* p1) : p(p1) {}
};

void toss()
{
  char buffer[10];
  strcpy(buffer, "Foo!");
  throw Foo(buffer);
}

int main()
{
  try {
    printf("before toss call\n");
    toss();
    printf("after toss call\n");
  } catch ( Foo ){
    printf("catch Foo. But I don't reference its member\n");
  }
  return 0;
}
