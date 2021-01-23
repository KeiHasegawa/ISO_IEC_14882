#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
  
};

template<class C1, class... Cn> struct S2 {
  S1<__is_constructible(C1, Cn...)> m1;
};

template<class C2> struct S3 {
  S2<C2> m2;
};

int main()
{
  S3<int> s3;
  if (s3.m2.m1.V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
