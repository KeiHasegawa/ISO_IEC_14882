#include <stdio.h>

class network_error {};
class file_system_error {};
class NFerror :
  public network_error,
  public file_system_error {};

void g(int);

void f(int n)
{
  try {
    printf("before g call\n");
    g(n);
    printf("after g call\n");
  }
  catch (network_error& ne) {
    printf("catch network error in `f'\n");
  }
  catch (file_system_error& fse) {
    printf("catch file system error in `f'\n");
  }
}

int main()
{
  f(0);
  f(1);
  f(2);
  return 0;
}

void g(int n)
{
  switch ( n ){
  case 0: throw network_error();
  case 1: throw file_system_error();
  default: throw NFerror();
  }
}
