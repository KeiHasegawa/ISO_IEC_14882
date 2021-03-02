/*
 * 2021/03/03
 * I could not judge if this program is ill-formed or not.
 * 
 * Think about the next code:
 */
#if 0
struct X2 {};

X2&& f(X2&& a)
{
  return a;
}

X2& g(X2& a)
{
  return f(a);
}
#endif
/*
 * If above code is ill-formed, bellow code is also ill-formed, I think.
 */
#include <stdio.h>

template<class C> C&& f(C&& a)
{
  printf("`f' called\n");
  return a;
}

struct X {};

X& g(X& a)
{
  printf("`g' called\n");
  return f(a);
}

int main()
{
  X x;
  g(x);
  return 0;
}
