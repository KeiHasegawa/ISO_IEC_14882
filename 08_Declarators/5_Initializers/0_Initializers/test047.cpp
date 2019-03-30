#include <stdio.h>

int main()
{
  char c = 'c';
  char& rc = c;
  const signed char& rsc = c;
  const unsigned char& ruc = c;
  rc = 'd';
  printf("rc = '%c', rsc = '%c', ruc = '%c'\n", rc, rsc, ruc);
  return 0;
}
