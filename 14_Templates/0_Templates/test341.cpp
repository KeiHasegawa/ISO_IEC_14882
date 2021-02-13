#include <stdio.h>

template <class... Cn> struct S {
  static const int V = sizeof...(Cn);
};

int main()
{
  printf("S<char>::V = %d\n", S<char>::V);
  printf("S<char, short>::V = %d\n", S<char, short>::V);
  printf("S<short, char>::V = %d\n", S<short, char>::V);
  printf("S<char, short, int>::V = %d\n", S<char, short, int>::V);
  return 0;
}
