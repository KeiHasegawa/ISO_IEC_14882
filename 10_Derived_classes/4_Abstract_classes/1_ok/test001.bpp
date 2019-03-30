/*
 * An abstract class shall not be used as a parameter type, as a function
 * return type, or as the type of an explicit conversion. Pointers and
 * references to an abstract class can be declared.
 */
#include <stdio.h>

class point { /* ... */ };

class shape { // abstract class
  point center;
  // ...
public:
  point where() { return center; }
  void move(point p) { center=p; draw(); }
  virtual void rotate(int) = 0; // pure virtual
  virtual void draw() = 0; // pure virtual
  // ...
};

shape* p; // OK
shape& h(shape&); // OK

void f()
{
  printf("`f' called\n");
  point pt;
  p->move(pt);
  p->rotate(5);
  p->draw();
}

void g()
{
  printf("`g' called\n");
  *p = h(*p);
  f();
}

class line : public shape {
public:
  void rotate(int n)
  {
    printf("`line::rotate' called with %d\n", n);
  }
  void draw()
  {
    printf("`line::draw' called\n");
  }
};

class triangle : public shape {
public:
  void rotate(int n)
  {
    printf("`triangle::rotate' called with %d\n", n);
  }
  void draw()
  {
    printf("`triangle::draw' called\n");
  }
};

class rectangle : public shape {
public:
  void rotate(int n)
  {
    printf("`rectangle::rotate' called with %d\n", n);
  }
  void draw()
  {
    printf("`rectangle::draw' called\n");
  }
};

int main()
{
  line ln;
  p = &ln;
  g();
  triangle tr;
  p = &tr;
  g();
  rectangle rec;
  p = &rec;
  g();
  return 0;
}

shape& h(shape& r)
{
  return r;
}
