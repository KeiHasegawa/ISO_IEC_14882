#include <stdio.h>

template<class C> struct S {
  static C s;
};

template<class C> C S<C>::s = 99;

int main()
{
  printf("S<char>::s = '%c'\n", S<char>::s);
  printf("S<char>::s = '%c'\n", S<char>::s = 'a');
  printf("S<int>::s = %d\n", S<int>::s);
  printf("S<int>::s = %d\n", S<int>::s = 1);
  printf("S<float>::s = %f\n", S<float>::s);
  printf("S<float>::s = %f\n", S<float>::s = 2.5);
  printf("S<dobule>::s = %f\n", S<double>::s);
  printf("S<dobule>::s = %f\n", S<double>::s = -0.125);
  return 0;
}
