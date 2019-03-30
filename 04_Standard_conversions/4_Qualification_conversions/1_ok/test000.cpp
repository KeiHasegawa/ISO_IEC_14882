#include <stdio.h>

int main() {
  const char c = 'c';
  printf("c = '%c'\n", c);
  const char* pc;
  const char** pcc = &pc;
  *pcc = &c;
  printf("**pcc = '%c'\n", **pcc);
  return 0;
}
