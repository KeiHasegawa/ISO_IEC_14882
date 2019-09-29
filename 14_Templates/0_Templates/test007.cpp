#include <stdio.h>

template<class T> class creator {
public:
  static T* create();
};

int* creator<int>::create();

int main()
{
  int* pi = creator<int>::create();
  *pi = 3;
  printf("*pi = %d\n", *pi);
  return 0;
}

int* creator<int>::create()
{
  return new int();
}
