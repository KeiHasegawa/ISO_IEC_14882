#include <stdio.h>

template<class> struct pred {
  enum { V };
};

template<> struct pred<int> {
  enum { V = 1 };
};

template<class C1> struct S1 {
  typedef C1 T1;
};

template<bool B> struct S2 {
  template<class C2> static void sf(C2 a)
  {
    if (B)
      printf("a = %d\n", a);
    else
      printf("a = %f\n", a);
  }
};

template<class C3> void f(C3 a)
{
  typedef typename S1<C3>::T1 T;
  const bool b = pred<T>::V;
  S2<b>::sf(a);
}

int main()
{
  f(3);
  f(4.0);
  return 0;
}
