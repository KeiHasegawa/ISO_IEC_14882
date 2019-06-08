/*
 * An abstract class shall not be used as a parameter type, as a function
 * return type, or as the type of an explicit conversion. Pointers and
 * references to an abstract class can be declared.
 */
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

shape x; // error: object of abstract class
shape* p; // OK
shape f(); // error
void g(shape); // error
shape& h(shape&); // OK
