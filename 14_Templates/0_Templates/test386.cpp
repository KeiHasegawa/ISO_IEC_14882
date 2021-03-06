#include <stdio.h>

template<class C1> int f(C1& a, C1& b)
{
  return 0;
}

template<class C2> int* f(C2 (&a)[5], C2 (&b)[5])
{
  return 0;
}

template<class C3, class C4 = C3&> C4 g(int);

template<class C5>
auto h() noexcept -> decltype(g<C5>(0));

template<class C6, class C7> struct S {
  decltype(f(h<C6>(), h<C7>())) m;
};

int main()
{
  S<int,int> obj;
  obj.m = 1234;
  typedef int X[5];
  S<X, X> obj2;
  int a = 5678;
  obj2.m = &a;
  printf("obj.m = %d, *obj2.m = %d\n", obj.m, *obj2.m);
  return 0;
}
