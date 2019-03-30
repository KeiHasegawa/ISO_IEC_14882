#include <stdio.h>

class T {
  int a;
public:
  T(int aa) : a(aa) {}
  T(const T& t)
  {
    a = t.a;
  }
  void print()
  {
    printf("a = %d\n", a);
  }
};

struct S {
  int a;
  S(int aa) : a(aa) {}
  operator T()
  {
    printf("operator S::T() called\n");
    return T(a);
  }
};

void f1(S a)
{
  T x(a);
  x.print();
}

void f2(S a)
{
  T x = a;
  x.print();
}

void f3(S a)
{
  T x = T(a);
  x.print();
}

void f4(S a)
{
  T x = (T)(a);
  x.print();
}

int main()
{
  f1(S(1));
  f2(S(2));
  f3(S(3));
  f4(S(4));
  return 0;
}
