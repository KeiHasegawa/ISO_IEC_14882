#include <stdio.h>

template<class...> struct S;

template<> struct S<> {
  int x0;
};

template<class C1> struct S<C1> {
  C1 x1;
};

template<class C2, class C3> struct S<C2, C3> {
  C2 x2;
  C3 x3;
};

template<class C4, class C5, class C6, class... C7>
struct S<C4, C5, C6, C7...> {
  C4 x4;
  C5 x5;
  C6 x6;
};

int main()
{
  S<> s0;
  printf("s0.x0 = %d\n", s0.x0 = 1);
  S<char> s1;
  printf("s1.x1 = %c\n", s1.x1 = '2');
  S<float, double> s2;
  printf("s2.x2 = %f s2.x3 = %f\n", s2.x2 = 3.0, s2.x3 = 4.0);
  S<short, char*, int> s3;
  char a[] = "6";
  printf("s3.x4 = %d s3.x5 = %s s3.x6 = %d\n",
	 s3.x4 = 5, s3.x5 = &a[0], s3.x6 = 7);
  return 0;
}

