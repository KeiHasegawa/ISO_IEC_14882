struct A {};

struct B : A {};

struct D : B {};

void f(B* pb)
{
  D* pd = dynamic_cast<D*>(pb);
}
