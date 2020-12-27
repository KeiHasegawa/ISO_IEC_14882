#include <stdio.h>

template<class C> void f(void* p)
{
  static_cast<C*>(p)->~C();
}

struct S {
  int m;
  ~S()
  {
    printf("S::~S() called. m = %d\n", m);
    ++m;
  }
};

int main()
{
  S s = { 123 };
  f<S>(&s);
  return 0;
}
