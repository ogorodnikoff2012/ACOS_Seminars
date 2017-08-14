typedef VeryVeryLongTypeName vvltn;
typedef int bool;

typedef struct foo {
    int x, y;
} foo_t; /* Suffix '_t' means 'data type' */

foo f1; /* WRONG! */
foo_t f2; /* OK */
struct foo f3; /* OK */
