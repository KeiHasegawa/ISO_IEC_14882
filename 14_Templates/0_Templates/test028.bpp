#include <stdio.h>

template<class T> class X; 
template<class T> class Y;
template<class T, typename XX = X<T>, class YY = Y<T> > class Z;

void f()
{
  typedef Z<int> zi;
  zi* g();
  g();
}

template<class T> class X {
public:
  T mem;
};

template<class T> class Y {
public:
  T* mem;
};

template<class T, typename XX, class YY> class Z {
public:
  T a[3];
  XX* p;
  YY f();
};


template<> Y<int> Z<int,X<int>,Y<int> >::f()
{
  Y<int> yi;
  yi.mem = new int(9);
  return yi;
}

Z<int>* g()
{
  Z<int>* zip = new Z<int>;
  for ( int i = 0 ; i < 3 ; ++i )
    printf("zip->a[%d] = %d\n", i, zip->a[i] = i);

  zip->p = new X<int>;
  printf("zip->p->mem = %d\n", zip->p->mem = -5);

  Y<int> yy = zip->f();
  printf("*yy.mem = %d\n", *yy.mem);

  return zip;
}

int main()
{
  f();
  return 0;
}
