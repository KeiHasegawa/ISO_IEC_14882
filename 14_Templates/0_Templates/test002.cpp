#include <stdio.h>

template<class T> class vector {
  T* v;
  int sz;
public:
  vector(int s) : sz(s)
  {
    v = new T[sz];
  }
  T& operator[](int i){ return v[i]; }
  T& elem(int i){ return v[i]; }
};

class Shape;

class vector<Shape*>;

class Window {
public:
  int id;
};

vector<Window>* current_window;

class svector : public vector<Shape*> {
public:
  svector();
};

void f()
{
  for ( int i = 0 ; i < 3 ; ++i )
    printf("(*current_window)[%d].id = %d\n",i,(*current_window)[i].id);
}

void g(vector<Shape*>&);

int main()
{
  vector<Window> vw(3);
  vw[0].id = 7;
  vw[1].id = 5;
  vw[2].id = 3;
  current_window = &vw;
  f();
  svector sv;
  g(sv);
  return 0;
}

class Shape {
public:
  virtual void print() = 0;
};

void g(vector<Shape*>& sv)
{
  for ( int i = 0 ; i < 4 ; ++i )
    sv[i]->print();
}

class Point : public Shape {
public:
  void print()
  {
    printf("Point::print called\n");
  }
};

class Line : public Shape {
public:
  void print()
  {
    printf("Line::print called\n");
  }
};

class Triangle : public Shape {
public:
  void print()
  {
    printf("Triangle::print called\n");
  }
};

class Polygon : public Shape {
public:
  void print()
  {
    printf("Polygon::print called\n");
  }
};

svector::svector() : vector<Shape*>(4)
{
  (*this)[0] = new Point;
  (*this)[1] = new Line;
  (*this)[2] = new Triangle;
  (*this)[3] = new Polygon;
}
