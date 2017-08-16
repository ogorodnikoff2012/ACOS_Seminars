#include <stdio.h>
int f1(int x) { return x << 3; }
int f2(int x) { return x + 23; }
int f3(int x) { return (x << 1) ^ (x >> 5); }
int f4(int x) { return -x; }
typedef int (* func_t)(int);
int main() {
    int x, y;
    func_t f[] = {f1, f2, f3, f4};
    scanf("%d%d", &x, &y);
    y = ((y - 1) & 3) + 1;
    printf("f%d(%d) = %d\n", y, x, f[y - 1](x));
    return 0;
}
