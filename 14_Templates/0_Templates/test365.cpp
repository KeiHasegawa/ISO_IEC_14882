#include <stdio.h>

template<class C1> struct S1 {
  C1 m;
};

template<class C> struct S2 {
  S1<int C::*> a;
};

template<class C> struct S3 {
  S1<int C::*> b;
};

struct X {
  int c;
  int d;
};

int main()
{
  S2<X> s2x;
  S3<X> s3x;
  s2x.a.m = &X::c;
  s3x.b.m = &X::d;
  X obj;
  printf("obj.*s2x.a.m = %d obj.*s3x.b.m = %d\n",
	 obj.*s2x.a.m = 1234, obj.*s3x.b.m = 5678);
  printf("obj.c = %d, obj.d = %d\n", obj.c, obj.d);
  return 0;
}
