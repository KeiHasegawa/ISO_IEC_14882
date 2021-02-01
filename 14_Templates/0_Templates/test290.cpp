#include <stdio.h>

struct S1 {
  template<class...> struct S2 {
    int m;
  };
};

struct S3 : S1 {
  using X = S2<int>;
};

int main()
{
  S3::X s3x;
  printf("s3x.m = %d\n", s3x.m = 123);
  return 0;
}
