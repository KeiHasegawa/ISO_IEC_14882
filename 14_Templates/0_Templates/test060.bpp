#include <stdio.h>

template<class C> struct outer {
  C mem;
};

template<> struct outer<int> {
  template<class C> struct inner {
    C mem;
  };
};

int main()
{
  outer<double> od;
  printf("od.mem = %f\n", od.mem = 1.5);
  outer<int>::inner<char> oic;
  printf("oic.mem = '%c'\n", oic.mem = 'a');
  outer<int>::inner<double> oid;
  printf("oid.mem = %f\n", oid.mem = -0.5);
  outer<char> oc;
  printf("oc.mem = '%c'\n", oc.mem = 'b');
  return 0;
}
