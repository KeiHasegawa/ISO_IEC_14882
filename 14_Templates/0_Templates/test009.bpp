#include <stdio.h>

template<class T> class stream {
public:
  int a;
};

class stream<char> {
public:
  int b;
};

int main()
{
  stream<int> si;
  si.a = 1;
  printf("si.a = %d\n", si.a);
  stream<char> sc;
  sc.b = 2;
  printf("sc.b = %d\n", sc.b);
  return 0;
}
