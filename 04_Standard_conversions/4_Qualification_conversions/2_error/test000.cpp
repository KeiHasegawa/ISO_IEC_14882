int main() {
  const char c = 'c';
  char* pc;
  const char** pcc = &pc; //1: not allowed
  *pcc = &c;
  *pc = 'C'; //2: modifies a const object
  return 0;
}
