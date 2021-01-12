#include <stdio.h>

template<class C1, class C2> struct BASE {
  struct T {
    C1 c1;
    C2 c2;
  };
};

template<class...> struct CAT;

template<> struct CAT<> {
  int* p;
};

template<class C1> struct CAT<C1> {
  C1 u;
};

template<class C1, class C2> struct CAT<C1, C2> {
  C1 a;
  C2 b;
};

template<class C1, class C2, class C3, class... Cn>
struct CAT<C1, C2, C3, Cn...> : BASE<C1, CAT<C2, C3, Cn...>>::T {};

int main()
{
  CAT<> s0;
  int a = 1;
  s0.p = &a;
  printf("*s0.p = %d\n", *s0.p);
  CAT<char> s1;
  s1.u = 'c';
  printf("s1.u = '%c'\n",s1.u);
  CAT<char, int> s2;
  s2.a = '2';
  s2.b = 3;
  printf("s2.a = '%c', s2.b = %d\n", s2.a, s2.b);
  CAT<char, int, double> s3;
  s3.c1 = '4';
  s3.c2.a = 5;
  s3.c2.b = 6.0;
  printf("s3.c1 = '%c', s3.c2.a = %d, s3.c2.b = %f\n",
	 s3.c1, s3.c2.a, s3.c2.b);
  return 0;
}
