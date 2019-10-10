#include <stdio.h>

template<class T> class task {
  T member;
  friend void next_time();
  friend task<T>* preempt(task<T>*);
};

struct X {
  double d;
};

void next_time()
{
  task<int>* pti = new task<int>;
  pti->member = 123;
  printf("pti->member = %d\n", pti->member);
  task<X>* ptx = new task<X>;
  ptx->member.d = 34.5;
  printf("ptx->member.d = %f\n", ptx->member.d);
}

template<class T> task<T>* preempt(task<T>* t)
{
  printf("%d\n", t->member = 456);
  return t;
}

int main()
{
  next_time();
  task<int> ti;
  preempt(&ti);
  return 0;
}
