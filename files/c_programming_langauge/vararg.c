#include <stdarg.h>
#include <stdio.h>
double average(int cnt, ...) {
    double sum = 0;
    va_list args;
    va_start(args, cnt);
    for (int i = 0; i < cnt; ++i) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return cnt == 0 ? 0 : sum / cnt;
}                 /*      These zeroes are ignored   */
int main() {      /*                         V  V    */
    printf("%f\n", average(3, 1.0, 2.0, 3.0, 0, 0));
    return 0;     /*          ^^^  ^^^  ^^^          */
}                 /* You should manually check types */
