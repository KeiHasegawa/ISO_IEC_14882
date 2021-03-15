#include <stdio.h>

class C {
  void init(int i){ mem = i; }
public:
  int mem;
  C(int i) : mem(i) { init(i); }
  C() : mem(1) { init(0); }
  C(const char* p) : mem(2) { init(0); }
};

int main()
{
  C x;
  printf("x.mem = %d\n", x.mem);
  C y(2);
  printf("y.mem = %d\n", y.mem);
  C z("hase");
  printf("z.mem = %d\n", z.mem);

  return 0;
}
