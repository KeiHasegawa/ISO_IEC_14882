#include <stdio.h>

template<class T> class vector {};

template<class T> void sort(vector<T>& v)
{
  printf("general version sort(vector<T>&) called\n");
}

void sort(vector<char*>& v)
{
  printf("special version sort(vector<char*>&) called\n");
}

int main()
{
  vector<int> vi;
  sort(vi);
  vector<char*> vpc;
  sort(vpc);
  return 0;
}
