#include <stdio.h>

class B {
protected:
  int i;
};

class D1 : public B {
};

class D2 : public B {
  friend void fr(B*, D1* ,D2*);
public:
  void mem(B*, D1*);
};

void D2::mem(B* pb, D1* p1)
{
  printf("`D2::mem' called\n");
  printf("i = %d\n", i = 3);
}

int main()
{
  B b;
  D1 d1;
  D2 d2;
  d2.mem(&b,&d1);
  return 0;
}
