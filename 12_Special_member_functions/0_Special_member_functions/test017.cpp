#include <stdio.h>

class X {
public:
  virtual operator const char*() { return "X"; }
};

class Y : public X {
  operator const char*() { return "Y"; }
};

void f(X* p)
{
  const char* s = *p;
  printf("s = %s\n", s);
}

int main()
{
  X x;
  f(&x);
  Y y;
  f(&y);
  return 0;
}
