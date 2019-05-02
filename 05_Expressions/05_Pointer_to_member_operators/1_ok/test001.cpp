#include <stdio.h>

struct S {
  int i;
  double d;
  char c;
  int ii;
  double dd;
  char cc;
};

void f(S s, int S::*pm, int v)
{
  s.*pm = v;
  printf("%d %f %c %d %f %c\n", s.i, s.d, s.c, s.ii, s.dd, s.cc);
}

void g(S* ps, double S::*pm, double v)
{
  ps->*pm = v;
  printf("%d %f %c %d %f %c\n", ps->i, ps->d, ps->c, ps->ii, ps->dd, ps->cc);
}

void h(S& s, char S::*pm, char v)
{
  s.*pm = v;
  printf("%d %f %c %d %f %c\n", s.i, s.d, s.c, s.ii, s.dd, s.cc);
}

int main()
{
  S s = { 1, 2.0, '3', 4, 5.0, '6' };
  f(s, &S::i,  7);
  f(s, &S::ii, 8);

  g(&s, &S::d,  9.0);
  g(&s, &S::dd, 10.0);

  h(s, &S::c,  'a');
  h(s, &S::cc, 'b');
  
  return 0;
}
