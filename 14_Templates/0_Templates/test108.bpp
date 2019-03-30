#include <stdio.h>

template<class C> struct S {
  static C s[3];
};

template<class C> C S<C>::s[3];

template<class C> struct S<C*> {
  static C s;
};

template<class C> C S<C*>::s;

int main()
{
  printf("S<char*>::s = '%c'\n", S<char*>::s = 'a');

  for ( int i = 0 ; i < 3 ; ++i )
    printf("S<int>::s[%d] = %d\n", i, S<int>::s[i] = i);
  return 0;
}
