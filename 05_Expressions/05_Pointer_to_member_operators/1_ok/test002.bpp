#include <stdio.h>

struct S {
  int i[4];
  double d[8];
  float f;
  char c[16];
  int ii[2];
  double dd[2];
  char cc[32];
  float ff;
};

void print(const S* ps)
{
  for (int i = 0 ; i != sizeof ps->i/sizeof ps->i[0] ; ++i)
    printf(" %d", ps->i[i]);
  printf("\n");

  for (int i = 0 ; i != sizeof ps->d/sizeof ps->d[0] ; ++i)
    printf(" %f", ps->d[i]);
  printf("\n");

  printf(" %f\n", ps->f);

  for (int i = 0 ; i != sizeof ps->c/sizeof ps->c[0] ; ++i) {
    if (char c = ps->c[i])
      printf(" %c", c);
  }
  printf("\n");

  for (int i = 0 ; i != sizeof ps->ii/sizeof ps->ii[0] ; ++i)
    printf(" %d", ps->ii[i]);
  printf("\n");

  for (int i = 0 ; i != sizeof ps->dd/sizeof ps->dd[0] ; ++i)
    printf(" %f", ps->dd[i]);
  printf("\n");

  for (int i = 0 ; i != sizeof ps->cc/sizeof ps->cc[0] ; ++i) {
    if (char c = ps->cc[i])
      printf(" %c", c);
  }
  printf("\n");

  printf(" %f\n", ps->ff);
}

void test000(S s, int (S::*pm)[4])
{
  for (int i = 0 ; i != sizeof (s.*pm)/sizeof (s.*pm)[0] ; ++i)
    (s.*pm)[i] += 3;
  print(&s);
}

void test001(S s, int (S::*pm)[2])
{
  for (int i = 0 ; i != sizeof (s.*pm)/sizeof (s.*pm)[0] ; ++i)
    (s.*pm)[i] -= 5;
  print(&s);
}

void test002(S* ps, double (S::*pm)[8], int i, double v)
{
  (ps->*pm)[i] = v;
  print(ps);
}

void test003(S* ps, double (S::*pm)[2], int i, double v)
{
  (ps->*pm)[i] = v;
  print(ps);
}

float test004(S& s, float S::*pm)
{
  return s.*pm;
}

void test005(S s, char (S::*pm)[16])
{
  printf("%s\n", s.*pm);
}

void test006(S* s, char (S::*pm)[32])
{
  printf("%s\n", s->*pm);
}

int main()
{
  S s = { { 1, 2, 3 }, { 4.0, 5.0, 6.0 }, 3.0, { 'a', 'b', 'c' },
	  { 7, 8 },    { 9.0, 10.0 }, { 'd', 'e', 'f' }, -1.0 };
  print(&s);

  printf("test000:\n");
  test000(s, &S::i);

  printf("test001:\n");
  test001(s, &S::ii);

  printf("test002:\n");
  test002(&s, &S::d, 4, 7.0);

  printf("test003:\n");
  test003(&s, &S::dd, 0, -2.0);

  printf("test004:\n");
  printf("%f %f\n", test004(s, &S::f), test004(s, &S::ff));

  printf("test005:\n");
  test005(s, &S::c);

  printf("test006:\n");
  test006(&s, &S::cc);

  return 0;
}
