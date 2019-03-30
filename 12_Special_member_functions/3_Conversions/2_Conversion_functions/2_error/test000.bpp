/*
 * The conversion-type-id shall not represent a function type nor an array
 * type. The conversion-type-id in a conversion-function-id is the longest
 * possible sequence of conversion-declarators. [Note: this prevents
 * ambiguities between the declarator operator * and its expression
 * counterparts.
 */

void f()
{
  class X {
  public:
    operator int() const;
  } ac;
  &ac.operator int*i; // syntax error:
                      // parsed as: &(ac.operator int *) i
                      // not as: &(ac.operator int)*i
}
