/*
 * Check if self tag reference class works well.
 */
#include <stdio.h>
#include <string.h>

struct tnode {
  char tword[20];
  int count;
  tnode *left;
  tnode *right;
};

tnode s, *sp;

void print(tnode* p)
{
  printf("\"%s\", %d\n", p->tword, p->count);
  if ( p->left )
    print(p->left);
  if ( p->right )
    print(p->right);
}

void f()
{
  sp = &s;
  strcpy(s.tword, "Kernighan");
  s.count = 5;
  tnode Ritchie = { "Ritchie", 7 };
  s.left = &Ritchie;
  tnode Tompson = { "Tompson", 9 };
  s.right = &Tompson;
  print(sp);
}

int main()
{
  f();
  return 0;
}
