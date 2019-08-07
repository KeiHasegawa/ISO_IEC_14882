/*
 * An object of class type can be initialized with a parenthesized
 * expression-list, where the expression-list is construed as an argument list
 * for a constructor that is called to initialize the object. Alternatively, a
 * single assignment-expression can be specified as an initializer using the =
 * form of initialization. Either directinitialization semantics or
 * copy-initialization semantics apply; see 8.5.
 */

class complex {
  // ...
public:
  complex();
  complex(double);
  complex(double,double);
  // ...
};

complex sqrt(complex,complex);

void f()
{
  complex a(1); // initialize by a call of
                // complex(double)
  complex b = a; // initialize by a copy of a
  complex c = complex(1,2); // construct complex(1,2)
                            // using complex(double,double)
                            // copy it into c
  complex d = sqrt(b,c); // call sqrt(complex,complex)
                         // and copy the result into d
  complex e; // initialize by a call of
             // complex()
  complex f = 3; // construct complex(3) using
                 // complex(double)
                 // copy it into f
  complex g = { 1, 2 }; // error; constructor is required
}

complex v[6] = { 1,complex(1,2),complex(),2 };

class X {
public:
  int i;
  float f;
  complex c;
} x = { 99, 88.8, 77.7 };
