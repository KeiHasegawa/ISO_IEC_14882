#include <stdio.h>

namespace N {
  template<class C> struct S {
    C c;
  };
}

namespace N {
  struct S2 {
    template<class C>
    bool operator()(const S<C>& x, const S<C>& y) const
    {
      return x.c < y.c;
    }
  };
}

int main()
{
  N::S2 s2;
  N::S<char> x, y;
  x.c = 'a';
  y.c = 'b';
  if ( s2(x,y) )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
