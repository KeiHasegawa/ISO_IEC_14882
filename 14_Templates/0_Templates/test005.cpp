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
  int size() const { return sz; }
};

class complex {
  double re, im;
public:
  complex(double r = 0, double i = 0) : re(r), im(i) {}
  void print() const
  {
    printf("re = %f, im = %f\n", re, im);
  }
};

void print(complex c)
{
  c.print();
}

void print(int i)
{
  printf("%d\n", i);
}

template<class T> void sort(vector<T> vec)
{
  printf("sort(vector<T>) called\n");
  for ( int i = 0 ; i < vec.size() ; ++i )
    print(vec[i]);
}

void f(vector<complex>& cv, vector<int>& ci)
{
  sort(cv);
  sort(ci);
}

int main()
{
  vector<complex> cv(3);
  for ( int i = 0 ; i < 3 ; ++i )
    cv[i] = complex(i+1,-(i+1));
  vector<int> ci(4);
  for ( int i = 0 ; i < 4 ; ++i )
    ci[i] = i;
  f(cv,ci);
  return 0;
}
