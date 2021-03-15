#include <stdio.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s) : sz(s)
  {
    v = new T[sz];
  }
  T& elem(int i){ return v[i]; }
  T& operator[](int i){ return v[i]; }
  ~vector(){ delete [] v; }
};

template<class T>
class pvector : vector<void*> {
public:
  pvector(int i) : vector<void*>(i) {}
  T*& elem(int i)
  { return (T*&) vector<void*>::elem(i); }
  T*& operator[](int i)
  { return (T*&) vector<void*>::operator[](i); }
};

class complex {
  double re, im;
public:
  complex(double r = 0, double i = 0) : re(r), im(i) {}
  void print() const
  {
    printf("(%f,%f)\n", re, im);
  }
};

int main()
{
  pvector<int> pivec(3);
  for ( int i = 0 ; i < 3 ; ++i )
    pivec[i] = new int(i);
  for ( int i = 0 ; i < 3 ; ++i )
    printf("*pivec.elem(%d) = %d\n", i, *pivec.elem(i));
  for ( int i = 0 ; i < 3 ; ++i )
    delete pivec[i];

  pvector<complex> icmpvec(4);
  for ( int i = 0 ; i < 4 ; ++i )
    icmpvec.elem(i) = new complex(i,-i);
  for ( int i = 0 ; i < 4 ; ++i )
    printf("icmpvec[%d]->print() = ", i), icmpvec[i]->print();
  for ( int i = 0 ; i < 4 ; ++i )
    delete icmpvec[i];

  pvector<const char*> pcvec(5);
  for ( int i = 0 ; i < 5 ; ++i )
    pcvec[i] = new char*;
  *pcvec[0] = "Kei";
  *pcvec[1] = "Hasegawa";
  *pcvec[2] = "C++";
  *pcvec[3] = "compiler";
  *pcvec[4] = "developer";
  for ( int i = 0 ; i < 5 ; ++i )
    printf("%s ", *pcvec[i]);
  printf("\n");

  return 0;
}
