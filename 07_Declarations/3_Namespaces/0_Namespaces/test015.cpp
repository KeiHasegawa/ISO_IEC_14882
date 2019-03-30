#include <stdio.h>

class outer {
public:
  struct inner;
private:
  friend struct inner;
  static const int sci = 1234;
public:
  struct inner {
    static char array[sci];
  };
};

int main()
{
  printf("sizeof(outer::inner::array) = %d\n",(int)sizeof(outer::inner::array));
  return 0;
}
