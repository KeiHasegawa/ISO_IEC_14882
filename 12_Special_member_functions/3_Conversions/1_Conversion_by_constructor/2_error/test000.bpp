/*
 * An explicit constructor constructs objects just like non-explicit
 * constructors, but does so only where the direct-initialization syntax (8.5)
 * or where casts (5.2.9, 5.4) are explicitly used. A default constructor may
 * be an explicit constructor; such a constructor will be used to perform
 * default-initialization or valueinitialization (8.5).
 */

class Z {
public:
  explicit Z();
  explicit Z(int);
  // ...
};

Z a; // OK: default-initialization performed
Z a1 = 1; // error: no implicit conversion
Z a3 = Z(1); // OK: direct initialization syntax used
Z a2(1); // OK: direct initialization syntax used
Z* p = new Z(1); // OK: direct initialization syntax used
Z a4 = (Z)1; // OK: explicit cast used
Z a5 = static_cast<Z>(1); // OK: explicit cast used
