#include <stdio.h>

template<int N> struct S {};

void f(int n)
{
  switch (n) {
  case 0:
    throw S<0>();
  case 1:
    throw S<1>();
  case 2:
    throw S<2>();
  case 3:
    throw S<3>();
  case 4:
    throw S<4>();
  default:
    throw S<5>();
  }
}

void g0(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  }
}

void g1(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  } catch (S<1>) {
    printf("catch S<1>\n");
  }
}

void g2(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  } catch (S<1>) {
    printf("catch S<1>\n");
  } catch (S<2>) {
    printf("catch S<2>\n");
  }
}

void g3(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  } catch (S<1>) {
    printf("catch S<1>\n");
  } catch (S<2>) {
    printf("catch S<2>\n");
  } catch (S<3>) {
    printf("catch S<3>\n");
  }
}

void g4(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  } catch (S<1>) {
    printf("catch S<1>\n");
  } catch (S<2>) {
    printf("catch S<2>\n");
  } catch (S<3>) {
    printf("catch S<3>\n");
  } catch (S<4>) {
    printf("catch S<4>\n");
  }
}

void g5(int n)
{
  try {
    f(n);
  } catch (S<0>) {
    printf("catch S<0>\n");
  } catch (S<1>) {
    printf("catch S<1>\n");
  } catch (S<2>) {
    printf("catch S<2>\n");
  } catch (S<3>) {
    printf("catch S<3>\n");
  } catch (S<4>) {
    printf("catch S<4>\n");
  } catch (S<5>) {
    printf("catch S<5>\n");
  }
}

int main()
{
  printf("\nbefore calling `g0'\n");
  g0(0);

  printf("\nbefore calling `g1'\n");
  g1(0), g1(1);

  printf("\nbefore calling `g2'\n");
  g2(0), g2(1), g2(2);

  printf("\nbefore calling `g3'\n");
  g3(0), g3(1), g3(2), g3(3);

  printf("\nbefore calling `g4'\n");
  g4(0), g4(1), g4(2), g4(3), g4(4);

  printf("\nbefore calling `g5'\n");
  g5(0), g5(1), g5(2), g5(3), g5(4), g5(5);

  return 0;
}
