#include <stdio.h>
#include "foo.h"
int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d %d\n", foo(x, y), bar(z));
    return 0;
}
