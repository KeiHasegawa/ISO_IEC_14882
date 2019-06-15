#include <stdio.h>

class C {
public:
  int mem;
  C(int i) : mem(i) {}
  C() { mem = 1; C(0); }
  C(char* p){ printf("%s\n", p); mem = 3; C(0); }
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
