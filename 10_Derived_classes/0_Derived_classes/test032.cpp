#include <stdio.h>

class shape {
public:
  virtual void draw() = 0;
};

shape* f(int);

shape& g(shape&);

int main()
{
  shape* p = f(0);
  p->draw();
  shape& r = g(*p);
  r.draw();
  p = f(1);
  p->draw();
  shape& r2 = g(*p);
  r2.draw();
  return 0;
}

struct line : public shape {
  void draw()
  {
    printf("line::draw called\n");
  }
};

struct triangle : public shape {
  void draw()
  {
    printf("triangle::draw called\n");
  }
};

shape* f(int n)
{
  switch ( n ){
  case 0: return new line;
  default: return new triangle;
  }
}

shape& g(shape& r)
{
  return r;
}
