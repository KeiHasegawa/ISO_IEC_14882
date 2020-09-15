#include <stdio.h>

template<class C1> struct S1 {
  C1 m1;
};

template<class C2> struct S2 {
  C2* ptr2;
};

template<class C3> struct S3 : S1<S2<C3> > {
  C3 array3[3];
};

template<class C4> struct S4 : S1<S3<C4> > {
  C4 m4;
};

int main()
{
  S4<int> s4i;
  s4i.m4 = 1;
  s4i.m1.array3[0] = 2;
  s4i.m1.array3[1] = 3;
  s4i.m1.array3[2] = 4;
  int n = 5;
  s4i.m1.m1.ptr2 = &n;
  printf("%d %d %d %d %d\n", s4i.m4, s4i.m1.array3[0], s4i.m1.array3[1],
	 s4i.m1.array3[2], *s4i.m1.m1.ptr2);
  return 0;
}
