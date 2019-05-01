#include <stdio.h>

class shape {
public:
  virtual void rotate(int) = 0;
  virtual void draw() = 0;
};

void f(shape& ref)
{
  ref.rotate(4567);
  ref.draw();
}

class circle : public shape {
  int radius;
public:
  void rotate(int a)
  {
    printf("circle::rorate called with %d\n", a);
  }
  void draw();
};

int main()
{
  circle c;
  f(c);
  return 0;
}

void circle::draw()
{
  printf("circle::draw called\n");
}
