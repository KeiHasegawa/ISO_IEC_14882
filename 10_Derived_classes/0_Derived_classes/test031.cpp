#include <stdio.h>

struct point {
  int x, y;
};

class shape {
  point center;
public:
  point where(){ return center; }
  void move(point p){ center = p; draw(); }
  virtual void rotate(int) = 0;
  virtual void draw() = 0;
};

struct line : public shape {
  point tip[2];
  void rotate(int a)
  {
    printf("line::rotate called with %d\n", a);
    tip[0].x += a;
    tip[1].y -= a;
    draw();
  }
  void draw()
  {
    printf("line::draw called\n");
    printf("tip[0].x = %d, tip[0].y = %d\n",
	   tip[0].x, tip[0].y);
    printf("tip[1].x = %d, tip[1].y = %d\n",
	   tip[1].x, tip[1].y);
  }
};

struct triangle : public shape {
  point tip[3];
  void rotate(int a)
  {
    printf("triagnle::rotate called with %d\n", a);
    tip[0].x += a;
    tip[1].y -= a;
    tip[2].x = a * tip[2].y;
    draw();
  }
  void draw()
  {
    printf("triagnle::draw called\n");
    printf("tip[0].x = %d, tip[0].y = %d\n",
	   tip[0].x, tip[0].y);
    printf("tip[1].x = %d, tip[1].y = %d\n",
	   tip[1].x, tip[1].y);
    printf("tip[2].x = %d, tip[2].y = %d\n",
	   tip[2].x, tip[2].y);
  }
};

void f(shape* p)
{
  p->draw();
  point pt = { -3, 11 };
  p->move(pt);
  point pt2 = p->where();
  printf("pt2 = (%d, %d)\n", pt2.x, pt2.y);
  p->rotate(5);
}

int main()
{
  line ln;
  ln.tip[0].x = 1;
  ln.tip[0].y = 2;
  ln.tip[1].x = 3;
  ln.tip[1].y = 4;
  f(&ln);
  triangle tr;
  tr.tip[0].x = 5;
  tr.tip[0].y = 6;
  tr.tip[1].x = 7;
  tr.tip[1].y = 8;
  tr.tip[2].x = 9;
  tr.tip[2].y = 10;
  f(&tr);
  return 0;
}
