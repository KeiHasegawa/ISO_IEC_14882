#include <stdio.h>

template<typename C> class X {
public:
  typedef C D;
private:
  D d;
public:
  D f() const { return d; }
  void f(D dd){ d = dd; }
};

int main()
{
  X<char> x;
  x.f('a');
  printf("x.f() = '%c'\n", x.f());
  return 0;
}
