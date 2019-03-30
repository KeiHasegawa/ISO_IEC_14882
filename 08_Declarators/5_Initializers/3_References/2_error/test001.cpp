/*
 * A reference to type "cv1 T1" is initialized by an expression of type
 * "cv2 T2" as follows:
 * - If the initializer expression
 *   - is an lvalue (but is not a bit-field), and "cv1 T1" is
 *     reference-compatible with "cv2 T2", or
 *   - has a class type (i.e., T2 is a class type) and can be implicitly
 *     converted to an lvalue of type "cvv3 T3", where "cv1 T1" is
 *     reference-compatible with "cv3 T3" 92) (this conversion is selected by
 *     enumerating the applicable conversion functions (13.3.1.6) and choosing
 *     the best one through overload resolution (13.3)),
 *
 *   then the reference is bound directly to the initializer expression lvalue
 *   in the first case, and the reference is bound to the lvalue result of the
 *   conversion in the second case. In these cases the reference is said to
 *   bind directly to the initializer expression.
 * - Otherwise, the reference shall be to a non-volatile const type (i.e.,
 *   cv1 shall be const).
 */
double& rd2 = 2.0; // error: not an lvalue and reference not const
int i = 2;
double& rd3 = i; // error: type mismatch and reference not const
