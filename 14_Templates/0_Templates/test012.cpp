#include <stdio.h>
#include <stdlib.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s) : sz(s)
  {
    v = new T[sz];
  }
  T& operator[](int);
  T& elem(int i){ return v[i]; }
};

void error(const char* msg)
{
  printf(msg);
  printf("\n");
  exit(0);
}

template<class T> T& vector<T>::operator[](int i)
{
  if (i<0 || sz<=i ) error("vector: range error");
  return v[i];
}

int main()
{
  vector<int> vi(2);
  vi[2];
  return 0;
}
