#include <stdio.h>

class V {
public:
  V& operator=(const V&)
  {
    printf("V::operator= called\n");
    return *this;
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
  C x, y;
  printf("before assignment x = y\n");
  x = y;
  printf("after assignment x = y\n");
  return 0;
}
