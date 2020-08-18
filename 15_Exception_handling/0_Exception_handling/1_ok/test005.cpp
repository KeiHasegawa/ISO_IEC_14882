#include <stdio.h>

class lock {
public:
  void grab()
  {
    printf("lock::grab() called\n");
  }
  void release()
  {
    printf("lock::release() called\n");
  }
};

lock very_important;

class grab_lock {
  lock& l;
public:
  grab_lock(lock& ll) : l(ll) { l.grab(); }
  ~grab_lock(){ l.release(); }
};

bool something_happen(){ return true; }

struct unexpected {};

void my_function()
{
  grab_lock mine(very_important);

  if ( something_happen() )
    throw unexpected();
}

int main()
{
  try {
    printf("before my_function call\n");
    my_function();
    printf("after my_function call\n");
  } catch ( unexpected ){
    printf("catch unexpected in `main'\n");
  }
  return 0;
}
