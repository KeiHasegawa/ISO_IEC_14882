#include <stdio.h>

template <class... Cn> struct S {
  static_assert(sizeof...(Cn) != 0, "At least one type is required");
};

int main()
{
  S<char> x;
  if (sizeof x)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
