void f()
{
  char c = 'c';
  char& rc = c;
  const char& rc2 = c;
  signed char& rsc = c;           // error
  const signed char& rsc2 = c;    // ok
  unsigned char& ruc = c;         // error
  const unsigned char& ruc2 = c;  // ok
}
