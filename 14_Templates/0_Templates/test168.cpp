#include <stdio.h>

namespace N1 {
  template<class C1> struct S1 {
    enum { V };
    C1 member;
  };
}

namespace N2 {
  template<bool B, class C2> struct S2 { typedef C2 T2; };
  template<class C3> struct S3 {
    C3* ptr;
  };
  template<class C4> struct S4 : public S2<N1::S1<C4>::V, S3<C4> >::T2 {
    C4 array[2];
  };
}

int main()
{
  N2::S4<int> x;
  x.array[0] = 7;
  x.array[1] = 8;
  x.ptr = &x.array[1];
  printf("x.array[0] = %d x.array[1] = %d *x.ptr= %d\n",
	 x.array[0], x.array[1], *x.ptr);
  return 0;
}
