/*
 * User-defined conversions are used implicitly only if they are unambiguous.
 * A conversion function in a derived class does not hide a conversion function
 * in a base class unless the two functions convert to the same type. Function
 * overload resolution (13.3.3) selects the best conversion function to perform
 * the conversion.
 */

class X {
public:
  // ...
  operator int();
};

class Y : public X {
public:
  // ...
  operator char();
};

void f(Y& a)
{
  if (a) { // ill-formed:
           // X::operator int() or Y::operator char()
           // ...
  }
}
