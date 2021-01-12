#include <stdio.h>

template<class C1, class C2> struct BASE {
  struct T {
    C1 c1;
    C2 c2;
  };
};

template<class...> struct CAT;

template<> struct CAT<> {};

template<class C1> struct CAT<C1> {};

template<class C1, class C2> struct CAT<C1, C2> {
  C1 a;
  C2 b;
};

template<class C1, class C2, class C3, class... Cn>
struct CAT<C1, C2, C3, Cn...> : BASE<C1, CAT<C2, C3, Cn...>>::T {};

template<class C1> struct S1 {
  C1 m;
};

template<class C4> struct S3 : CAT<S1<C4>, S1<C4>, S1<C4>>::T {};

int main()
{
  S3<int> s3;
  s3.c1.m = 1;
  s3.c2.a.m = 2;
  s3.c2.b.m = 3;
  printf("s3.c1.m = %d, s3.c2.a.m = %d, s3.c2.b.m = %d\n",
	 s3.c1.m, s3.c2.a.m, s3.c2.b.m);
  return 0;
}
