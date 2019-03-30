/*
 * - If the initializer expression is an rvalue, with T2 a class type, and
 *   "cv1 T1" is reference-compatible with "cv2 T2", the reference is bound in
 *   one of the following ways (the choice is implementation-defined):
 *   - The reference is bound to the object represented by the rvalue
 *     (see 3.10) or to a sub-object within that object.
 *   - A temporary of type "cv1 T2" [sic] is created, and a constructor is
 *     called to copy the entire rvalue object into the temporary. The
 *     reference is bound to the temporary or to a sub-object within the
 *     temporary.93)
 * - Otherwise, a temporary of type "cv1 T1" is created and initialized from
 *   the initializer expression using the rules for a non-reference copy
 *   initialization (8.5). The reference is then bound to the temporary.
 *   If T1 is reference-related to T2, cv1 must be the same cv-qualification
 *   as, or greater cvqualification than, cv2; otherwise, the program is
 *   ill-formed.
 */
const double& rcd2 = 2; // rcd2 refers to temporary with value 2.0
const volatile int cvi = 1;
const int& r = cvi; // error: type qualifiers dropped
