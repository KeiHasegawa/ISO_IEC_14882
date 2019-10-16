#include <stdio.h>

template<class T1, class T2> class C;

C<int, double>* ptr;

template<class S1, class S2> class C {
public:
  S1 s1;
  S2 s2;
};

void f()
{
  printf("%d %f\n", ptr->s1, ptr->s2);
}

int main()
{
  C<int, double> cid;
  cid.s1 = 1;
  cid.s2 = 2.0;
  ptr = &cid;
  f();
  return 0;
}
