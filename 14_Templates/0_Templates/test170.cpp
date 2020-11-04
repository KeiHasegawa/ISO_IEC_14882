#include <stdio.h>

template<class C>  struct S  {
  typedef typename C::T T;
};

template<class C> typename S<C>::T f(const C&)
{
  printf("`f' called\n");
  return typename S<C>::T();
}

struct X {
  struct T {
    int m;
  };
};

int main()
{
  X x;
  S<X>::T t = f(x);
  return 0;
}
