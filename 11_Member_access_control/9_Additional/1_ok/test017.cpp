#include <stdio.h>

class B {
protected:
  int i;
};

class D1 : public B {
};

class D2 : public B {
  friend void fr(B*, D1* ,D2*);
  void mem(B*, D1*);
};

void fr(B* pb, D1* p1, D2* p2)
{
  printf("`fr' called\n");
  printf("p2->i = %d\n", p2->i = 3);
}

int main()
{
  B b;
  D1 d1;
  D2 d2;
  fr(&b,&d1,&d2);
  return 0;
}
