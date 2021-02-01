#include <stdio.h>

template<class C1> struct S1;

struct S2 {
  template<class...> struct S3 {
    int m;
  };
  template<class C2, class... Cn> struct S3<C2, Cn...> : S3<Cn...> {};
};

template<class C3> struct S1<C3*> : S2 {
  using X = S3<C3>;
  using Y = typename S1<X>::T1;
};

template<class C4> struct S1 {
  typedef C4 T1;
};

int main()
{
  S1<int*>::Y y;
  printf("y.m = %d\n", y.m = 789);
  return 0;
}
