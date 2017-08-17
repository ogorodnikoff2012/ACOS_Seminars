#include "foo.h"

int foo(int x, int y) {
    return x * x + y * y;
}

int bar(int z) {
    return z < 0 ? -z : z;
}
