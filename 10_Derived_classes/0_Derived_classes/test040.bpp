#include <stdio.h>

class V {
public:
  void f()
  {
    printf("V::f called\n");
  }
};

class C : virtual public V {
public:
  void g()
  {
    printf("C::g called\n");
    f();
  }
};

int main()
{
  C cc;
  cc.f();
  cc.g();
  return 0;
}
