/*
 * At most one user-defined conversion (constructor or conversion function) is
 * implicitly applied to a single value.
 */

class X {
  // ...
public:
  operator int();
};

class Y {
  // ...
public:
  operator X();
};

void f()
{
  Y a;
  int b = a; // error:
             // a.operator X().operator int() not tried
  int c = X(a); // OK: a.operator X().operator int()
}

