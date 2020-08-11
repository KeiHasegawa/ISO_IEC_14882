#include <stdio.h>

void g();

int main()
{
  try {
    printf("before g call\n");
    g();
    printf("after g call\n");
  }
  catch (...) {
    printf("catch something\n");
  }
  return 0;
}

void g()
{
  struct local {};
  throw local();
}
