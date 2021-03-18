struct A {};

struct B : virtual A {};

struct D : B {};

void f(B* pb)
{
  D* pd = dynamic_cast<D*>(pb);
}
