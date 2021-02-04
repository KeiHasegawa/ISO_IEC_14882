#include <stdio.h>

template<class C1, C1 V>
struct S {
  static const C1 V1 = V;
};

template<class C2, C2 VV> const C2 S<C2, VV>::V1;

template<bool VVV> using U = S<bool, VVV>;

int main()
{
  if (U<true>::V1)
    printf("ok\n");
  else
    printf("error\n");
  if (U<false>::V1)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
