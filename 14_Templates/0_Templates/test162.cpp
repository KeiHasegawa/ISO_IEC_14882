#include <stdio.h>

template<int N, class C1> struct S1 {
  C1 array[N];
};

template<class C2> struct S2 {
  enum { X = 2, Y, Z };
  C2* ptr;
};

template<class C3> struct S3 {
  S1<S2<C3>::Z, C3> m;
};

int main()
{
  S3<int> s3i;

  for (int i = 0 ; i != sizeof s3i.m.array/sizeof s3i.m.array[0] ; ++i)
    printf("%d ", s3i.m.array[i] = i + 10);
  printf("\n");
  return 0;
}


