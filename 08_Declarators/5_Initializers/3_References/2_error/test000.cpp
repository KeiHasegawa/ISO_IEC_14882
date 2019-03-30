/*
 * The initializer can be omitted for a reference only in a parameter
 * declaration (8.3.5), in the declaration of a function return type, in the
 * declaration of a class member within its class declaration (9.2), and where
 * the extern specifier is explicitly used.
 */
int& r1; // error: initializer missing
extern int& r2; // OK
