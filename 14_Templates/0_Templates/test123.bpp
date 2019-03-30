#include <stdio.h>

template<class C> struct S {
  struct inner : C {
    inner()
    {
      printf("S<C>::inner::inner() called\n");
    }
    inner(const C& c) : C(c)
    {
      printf("S<C>::inner::inner(const C&) called\n");
    }
  };
};

struct T {
  T()
  {
    printf("T::T() called\n");
  }
};

int main()
{
  S<T>::inner x;
  return 0;
}
