struct T {};

void f(int a)
{
  T t1();   // function declaration

  T t2(a);  // object definition initialized with `a'
            // error. initializer is not valid.
}
