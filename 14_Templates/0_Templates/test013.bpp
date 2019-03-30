#include <stdio.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int);
  T& operator[](int i){ return v[i]; }
  ~vector();
};

template<class T> vector<T>::vector(int s) : sz(s)
{
  v = new T[sz];
}

template<class T> vector<T>::~vector()
{
  delete[] v;
}

int main()
{
  vector<int> vi(5);
  for ( int i = 0 ; i < 5 ; ++i )
    vi[i] = i;
  for ( int i = 0 ; i < 5 ; ++i )
    printf("vi[%d] = %d\n", i, vi[i]);
  return 0;
}
