/*
 * a function declaration cannot provide both a pure-specifier and a definition
 */
struct C {
  virtual void f() = 0 { }; // ill-formed
};
