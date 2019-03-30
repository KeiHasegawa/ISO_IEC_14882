#include <stdio.h>

void g();

void f()
{
  try {
    printf("before g call\n");
    g();
    printf("after g call\n");
  }
  catch (...) {
    printf("catch something in `f'\n");
    throw;
  }
}

int main()
{
  try {
    printf("before f call\n");
    f();
    printf("after f call\n");
  }
  catch (...) {
    printf("catch something in `main'\n");
  }
  return 0;
}

void g()
{
  struct local {};
  throw local();
}
