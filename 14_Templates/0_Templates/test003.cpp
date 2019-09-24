#include <stdio.h>
#include <string.h>

template<class E, int size> class buffer {
public:
  E mem[size];
};

buffer<char,2*512> x;
buffer<char,1024> y;

void f()
{
  x = y;
  y = x;
}

int main()
{
  strcpy(&x.mem[0],"hasegawa");
  printf("%s\n", &x.mem[0]);
  strcpy(&y.mem[0],"kei");
  printf("%s\n", &y.mem[0]);
  f();
  printf("%s\n", &x.mem[0]);
  printf("%s\n", &y.mem[0]);
  return 0;
}
