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
  ~vector()
  {
    printf("~vector called\n");
    delete[] v;
  }
};

void f(vector<int>* p)
{
  p->vector<int>::~vector<int>();
  vector<int>& v = vector<int>(10);
  for ( int i = 0 ; i < 10 ; ++i )
    v[i] = i;
  for ( int i = 0 ; i < 10 ; ++i )
    printf("v[%d] = %d\n", i, v[i]);
}

int main()
{
  f(new vector<int>(3));
  return 0;
}
