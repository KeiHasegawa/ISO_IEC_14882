#include <stdio.h>

void print(int n)
{
  printf("n = %d\n", n);
}

void print(char* p)
{
  printf("p = \"%s\"\n", p);
}

template<class T> void f(T* p)
{
  static T s;
  if ( s )
    print(s);
  else
    s = *p;
}

void g(int a, char* b)
{
  printf("a = %d\n", a);
  f(&a), f(&a);

  printf("b = \"%s\"\n", b);
  f(&b), f(&b);
}

int main()
{
  char a[] = "Kei Hasegawa";
  g(1234,&a[0]);
  return 0;
}
