#include <stdio.h>

template<class C1, class C2 = C1&&> C2 f();

template<class C3> auto g() -> decltype(f<C3>());

template<typename C4>
auto g() -> decltype(f<C4>())
{
  return f<C4>();
}

int a = 1234;

template<class C5, class C6> C6 f()
{
  return (C6)a;
}

int main()
{
  auto b = g<int>();
  printf("b = %d\n", b);
  return 0;
}
