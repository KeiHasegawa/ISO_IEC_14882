/*
 * A virtual function is specified pure by using a pure-specifier (9.2) in the
 * function declaration in the class declaration. A pure virtual function need
 * be defined only if explicitly called with the qualified-id syntax (5.1).
 */
#include <stdio.h>

class point { /* ... */ };
class shape { // abstract class
  point center;
public:
  point where() { return center; }
  void move(point p) { center=p; draw(); }
  virtual void rotate(int) = 0; // pure virtual
  virtual void draw() = 0; // pure virtual
};

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

void f(shape* ps)
{
  printf("`f' called\n");
  point pt;
  ps->move(pt);
  ps->rotate(5);
  ps->draw();
}

int main()
{
  line ln;
  f(&ln);
  triangle tr;
  f(&tr);
  rectangle rec;
  f(&rec);
  return 0;
}
