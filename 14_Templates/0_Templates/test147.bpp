#include <stdio.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s);
  T& operator[](int i){ return v[i]; }
  T& elem(int i){ return v[i]; }
};

template<class T> vector<T>::vector(int s) : sz(s)
{
  v = new T[sz];
}

int main()
{
  vector<int> v(5);
  for (int i = 0 ; i != 5 ; ++i)
    v[i] = i + 10;

  for (int i = 0 ; i != 5 ; ++i)
    printf(" %d", v.elem(i));

  printf("\n");
  return 0;
}
