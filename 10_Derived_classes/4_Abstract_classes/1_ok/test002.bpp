/*
 * A class is abstract if it contains or inherits at least one pure virtual
 * function for which the final overrider is pure virtual.
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

class ab_circle : public shape {
  int radius;
public:
  void rotate(int) {}
  // ab_circle::draw() is a pure virtual
};

class circle : public shape {
  int radius;
public:
  void rotate(int) {}
  void draw(); // a definition is required somewhere
};

void f(shape* ps)
{
  printf("`f' called\n");
  point pt;
  ps->move(pt);
  ps->rotate(7);
}

void g(ab_circle* pac)
{
  printf("`g' called\n");
  point pt;
  pac->move(pt);
  pac->rotate(8);
}

struct circle2 : ab_circle {
  void draw()
  {
    printf("`circle2::draw' called\n");
  }
};

int main()
{
  circle c;
  f(&c);
  circle2 c2;
  f(&c2);
  g(&c2);
  return 0;
}

void circle::draw()
{
  printf("`circle::draw' called\n");
}
