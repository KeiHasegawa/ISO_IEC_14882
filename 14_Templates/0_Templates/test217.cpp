#include <stdio.h>

struct S1 {};

template<class> struct S2;

template<class RandomAccessIterator>
RandomAccessIterator
f(RandomAccessIterator a, RandomAccessIterator b, S1)
{
  switch (b - a) {
  default:
    return b;
  }
}

template<class Iterator>
Iterator f(Iterator a, Iterator b)
{
  return f(a, b, S1());
}

int main()
{
  printf("f(0, 10) return value : %d\n", f(0, 10));
  return 0;
}
