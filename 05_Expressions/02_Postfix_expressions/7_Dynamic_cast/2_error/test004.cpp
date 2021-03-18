struct B {};

struct D : B {};

void f(D d)
{
  B b = dynamic_cast<B>(d);
}
