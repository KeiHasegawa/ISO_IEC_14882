#include <stdio.h>

template<class T, void (*err_fct)()> class list {
public:
  static void f(){ (*err_fct)(); }
};

void error_handler1()
{
  printf("error_handler1 called\n");
}

void error_handler2()
{
  printf("error_handler2 called\n");
}

list<int,&error_handler1> x1;
list<int,&error_handler2> x2;
list<int,&error_handler2> x3;
list<char,&error_handler2> x4;

void f()
{
  printf("f called\n");
  x2 = x3;
  x3 = x2;
}

int main()
{
  x1.f();
  x2.f();
  x3.f();
  x4.f();
  f();
  x1.f();
  x2.f();
  x3.f();
  x4.f();
  return 0;
}
