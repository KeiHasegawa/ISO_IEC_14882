struct S {
  int i[4];
  int ii[2];
};

void f(int (S::*pm)[]);

void g()
{
  f(&S::i);
  f(&S::ii);
}
