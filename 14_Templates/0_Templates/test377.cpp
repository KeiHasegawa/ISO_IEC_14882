#include <stdio.h>

template<template<class> class, class...> struct S;

template<template<class> class X> struct S<X> {
  X<int> m;
};

template<class C1> struct Y {
  C1 c1;
};

int main()
{
  S<Y> obj;
  printf("obj.m.c1 = %d\n", obj.m.c1 = 1234);
  return 0;
}
