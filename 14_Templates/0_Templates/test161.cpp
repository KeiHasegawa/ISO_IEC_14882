#include <stdio.h>

template<int N, class C1> struct S {
  C1 array[N];
};

template<class C2> struct S<5, C2> {
  C2 m;
};

template<class C3> struct S<7, C3> {
  const C3* ptr;
};

int main()
{
  S<3,int> s3i;
  for (int i = 0 ; i != sizeof s3i.array/sizeof s3i.array[0] ; ++i)
    printf("%d ", s3i.array[i] = i+2);
  printf("\n");

  S<5,double> s5d;
  printf("%f\n", s5d.m = -0.5);

  S<7,char> s7c;
  printf("%s\n", s7c.ptr = "hello");
  
  return 0;
}
