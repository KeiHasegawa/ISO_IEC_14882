#include <stdio.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s) : sz(s)
  {
    v = new T[sz];
  }
  T& operator[](int i){ return v[i]; }
  T& elem(int i){ return v[i]; }
};

class complex {
  double re, im;
public:
  complex(double r = 0, double i = 0) : re(r), im(i) {}
  void print()
  {
    printf("(%f, %f)", re, im);
  }
};

int main()
{
  vector<int> v1(3);
  vector<complex> v2(3);

  typedef vector<complex> cvec;

  cvec v3(3);

  v1[0] = 7;
  for ( int i = 0 ; i < 3 ; ++i )
    printf("v1[%d] = %d\n", i, v1[i]);

  v2[1] = v3.elem(2) = complex(7,8);
  for ( int i = 0 ; i < 3 ; ++i ){
    printf("v2[%d] = ", i);
    v2[i].print();
    printf(" v3[%d] = ", i);
    v3[i].print();
    printf("\n");
  }

  return 0;
}
