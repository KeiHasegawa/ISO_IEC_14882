#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2>
void f(C2 (*pa)[5])
{
  for (int i = 0 ; i != 5 ; ++i)
    printf("%d ", (*pa)[i]);
  printf("\n");
}

int main()
{
  f(1);
  int a[] = { 2, 3, 4, 5, 6 };
  f(&a);
  return 0;
}
