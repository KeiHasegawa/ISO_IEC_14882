#include <stdio.h>

template<class C> class X;
template<> class X<int>;

X<int>* f();

int main()
{
  f();
  return 0;
}

template<> class X<int> {
public:
  double mem;
};

X<int>* f()
{
  X<int>* p = new X<int>;
  printf("p->mem = %f\n", p->mem = 12.5);
  return p;
}

