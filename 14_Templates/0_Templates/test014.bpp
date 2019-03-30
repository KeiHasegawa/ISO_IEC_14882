#include <stdio.h>
#include <string.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s) : sz(s)
  {
    v = new T[sz];
    memset(v,0,sizeof(T)*sz);
  }
  T& operator[](int i){ return v[i]; }
  ~vector()
  {
    delete[] v;
  }
};

class complex {
  double re, im;
public:
  complex(double r = 0, double i = 0) : re(r), im(i) {}
  void print()
  {
    printf("(%f,%f)\n", re, im);
  }
};

int main()
{
  vector<int> v1(4);
  vector<complex> v2(5);

  v1[2] = 7;
  v2[3] = complex(7,8);
  for ( int i = 0 ; i < 4 ; ++i )
    printf("v1[%d] = %d\n", i, v1[i]);
  for ( int i = 0 ; i < 5 ; ++i )
    printf("v2[%d] = ", i), v2[i].print();
  return 0;
}
