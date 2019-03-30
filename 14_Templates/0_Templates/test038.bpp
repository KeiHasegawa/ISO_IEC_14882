#include <stdio.h>

template<class A> struct X;

template<class A, class B = X<A> > struct Y;

template<class A, class B = X<A> > struct Z;

template<class A> struct X {
  A xm;
};

template<class A, class B> struct Y {
  A ym1;
  B ym2;
};

template<class A, class B> struct Z {
  A zm1;
  B zm2;
};

typedef Y<int> y;

int main()
{
  y yy;
  yy.ym1 = 1;
  yy.ym2.xm = 2;

  printf("yy.ym1 = %d, yy.ym2.xm = %d\n", yy.ym1, yy.ym2.xm);

  Y<int,double> yid;
  yid.ym1 = 3;
  yid.ym2 = 4.5;
  printf("yid.ym1 = %d, yid.ym2 = %f\n", yid.ym1, yid.ym2);

  Z<char> zc;
  zc.zm1 = 'a';
  zc.zm2.xm = 'b';
  printf("zc.zm1 = '%c', zc.zm2.xm = '%c'\n", zc.zm1, zc.zm2.xm);

  return 0;
}
