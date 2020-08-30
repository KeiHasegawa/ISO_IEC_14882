void f00(void);
void f01(char);
void f02(signed char);
void f03(unsigned char);
void f04(short int);
void f05(unsigned short int);
void f06(int);
void f07(unsigned int);
void f08(long int);
void f09(unsigned long int);
void f10(long long int);
void f11(unsigned long long int);

void f12(int*);
void f13(int (*)[5]);
void f14(int (*)(double));
void f15(const int*);
void f16(volatile int*);
void f17(int&);

struct S;
void f18(S*);

struct T { int m; };
void f19(T);

enum E { a, b, c };
void f20(E);

void f21(int T::*);

namespace abc { namespace def { extern int ghi; } }

class C {
public:
  C();
  void mf();
  ~C();
};

class B {
public:
  virtual void vf();
};

class D : public B {
public:
  void vf();
};

void vfcall(B* pb)
{
  pb->vf();
}

extern "C" {
  extern int c_var;
  void c_func(void);
}

template<class T> struct SS {
  T m;
  SS();
};

template<int N> struct SSS {
  char array[N];
  SSS();
};

int main()
{
  f00();
  f01(0);
  f02(0);
  f03(0);
  f04(0);
  f05(0);
  f06(0);
  f07(0);
  f08(0);
  f09(0);
  f10(0);
  f11(0);
  f12(0);
  f13(0);
  f14(0);
  f15(0);
  f16(0);
  int n; f17(n);
  f18(0);
  T t; f19(t);
  f20(a);
  int T::*pm = &T::m; f21(pm);
  C c;
  c.mf();
  B b;
  vfcall(&b);
  D d;
  vfcall(&d);
  c_func();
  SS<int> ssi;
  SSS<3> sss3;
  return abc::def::ghi + c_var;
}
