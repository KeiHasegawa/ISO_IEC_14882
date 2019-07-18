#include <stdio.h>

class V {
public:
  V(){}
  V(const V&)
  {
    printf("V::V(const V&) called\n");
  }
};

class A : public virtual V {
};

class B : public virtual V {
};

class C : public A, public B {
};

int main()
{
  C x;
  printf("before initialize y\n");
  C y = x;
  printf("after initialize y\n");
  return 0;
}
