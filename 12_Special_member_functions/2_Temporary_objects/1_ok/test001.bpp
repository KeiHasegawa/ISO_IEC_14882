#include <stdio.h>

class C {
  int m;
public:
  C();
  C(int);
  friend C operator+(const C&, const C&);
  ~C();
};

const C* array[3];

int main()
{
  C obj1;
  array[0] = &obj1;
  const C& cr = C(16)+C(23);
  array[1] = &cr;
  C obj2;
  array[2] = &obj2;
  return 0;
}

/*
 * the expression C(16)+C(23) creates three temporaries. A first temporary T1
 * to hold the result of the expression C(16), a second temporary T2 to hold
 * the result of the expression C(23), and a third temporary T3 to hold the
 * result of the addition of these two expressions. The temporary T3 is then
 * bound to the reference cr. It is unspecified whether T1 or T2 is created
 * first. On an implementation where T1 is created before T2, it is guaranteed
 * that T2 is destroyed before T1. The temporaries T1 and T2 are bound to the
 * reference parameters of operator+; these temporaries are destroyed at the
 * end of the full expression containing the call to operator+. The temporary
 * T3 bound to the reference cr is destroyed at the end of cr's lifetime, that
 * is, at the end of the program. In addition, the order in which T3 is
 * destroyed takes into account the destruction order of other objects with
 * static storage duration. That is, because obj1 is constructed before T3,
 * and T3 is constructed before obj2, it is guaranteed that obj2 is destroyed
 * before T3, and that T3 is destroyed before obj1.
 */

C::C() : m(0)
{
}

C::C(int mm) : m(mm)
{
}

C::~C()
{
  static int cnt;
  if ( array[0] == this ){
    if ( ++cnt == 3 )
      printf("ok\n");
    else
      printf("error\n");
  }
  else if ( array[1] == this ){
    if ( ++cnt == 2 )
      printf("ok\n");
    else
      printf("error\n");
  }
  else if ( array[2] == this ){
    if ( ++cnt == 1 )
      printf("ok\n");
    else
      printf("error\n");
  }
}

C operator+(const C& y, const C& z)
{
  return y;
}
