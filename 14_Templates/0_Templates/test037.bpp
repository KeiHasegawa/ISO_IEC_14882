#include <stdio.h>

template<class C> class X {
public:
  typedef C D;
  void f(D d = D())
  {
    printf("X<C>::f called\n");
  }
};

int main()
{
  X<int> xi;
  xi.f();
  return 0;
}
