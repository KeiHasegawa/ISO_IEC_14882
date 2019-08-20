/*
 * If the class definition does not explicitly declare a copy constructor, one
 * is declared implicitly. Thus, for the class definition
 */
struct X {
  X(const X&, int);
};

void f(const X& a)
{
  X b = a;
}

/*
 * a copy constructor is implicitly-declared. If the user-declared constructor
 * is later defined as
 */
X::X(const X& x, int i = 0)
{
}

/*
 * then any use of X's copy constructor is ill-formed because of the
 * ambiguity; no diagnostic is required.
 */

void g(const X& y)
{
  X x = y;
}
