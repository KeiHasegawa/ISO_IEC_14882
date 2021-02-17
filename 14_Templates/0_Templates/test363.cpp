extern "C" int printf(const char*, ...);

template<class C1> C1 f(int);

template<class C2> auto g() noexcept -> decltype(f<C2>(0));

template<class C3> struct S1 {};

template<class C4, class C5, class... Cn>
S1<decltype((g<C5>().*g<C4>())(g<Cn>()...))> h()
{
  printf("`h' called\n");
  return S1<decltype((g<C5>().*g<C4>())(g<Cn>()...))>();
}

struct X {};

int main()
{
  typedef int (X::*Y)();
  h<Y,X>();
  return 0;
}
