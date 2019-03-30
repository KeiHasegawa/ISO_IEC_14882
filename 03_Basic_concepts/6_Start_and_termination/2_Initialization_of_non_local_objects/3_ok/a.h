#ifndef _A_H_
#define _A_H_

#include <stdio.h>

struct A {
  A();
  void Use(){ printf("`A::Use' called\n"); }
};

#endif // _A_H_
