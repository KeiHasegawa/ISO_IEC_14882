#include <stdio.h>

struct S1 {
  template<class...> struct S2 {
    static const int V1 = 6;
  };

  template<int N1, class C1, bool BB = (N1 <= C1::V1)> struct S3 {
    static const bool V3 = BB;
  };

  template<int N2, class C2, class... Cn>
  struct S3<N2, S2<C2, Cn...>, false> : S3<N2, S2<Cn...>> {};
};

struct X {};

int main()
{
  S1::S3<5, S1::S2<X>,false> s35;
  if (s35.V3)
    printf("ok\n");
  else
    printf("error\n");
  S1::S3<7, S1::S2<X>,false> s37;
  if (s37.V3)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
