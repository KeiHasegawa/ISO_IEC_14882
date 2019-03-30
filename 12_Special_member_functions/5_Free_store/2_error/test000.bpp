/*
 * Any allocation function for a class T is a static member (even if not
 * explicitly declared static).
 */
typedef unsigned int size_t;
class Arena;
struct B {
  void* operator new(size_t, Arena*);
};
struct D1 : B {
};
Arena* ap;
void foo(int i)
{
  new (ap) D1; // calls B::operator new(size_t, Arena*)
  new D1[i]; // calls ::operator new[](size_t)
  new D1; // ill-formed: ::operator new(size_t) hidden
}
