#include <stdio.h>

class mybase {
public:
  static int rep;
  virtual int* mytype();
};

int* mybase::mytype(){ return &rep; }

int mybase::rep;

class myderived1 : public mybase {
public:
  static int rep;
  int* mytype();
};

int* myderived1::mytype(){ return &rep; }

int myderived1::rep;

void f(mybase* p)
{
  if ( p->mytype() == &myderived1::rep )
    printf("p points to myderived1 object\n");
  else
    printf("p doesn't point to myderived1 object\n");
}

int main()
{
  mybase b;
  f(&b);
  myderived1 d;
  f(&d);
  return 0;
}
