#include <stdio.h>
#include <stdbool.h>
bool in_range(int x, int l, int r) {
    return x >= l && x <= r;
}
int main() {
    int hh, mm, ss, to_m;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    if (!in_range(hh, 0, 23) || !in_range(mm, 0, 59) ||
            !in_range(ss, 0, 59)) {
        printf("Bad time\n"); return 1;
    }
    to_m = 24 * 60 * 60 - (3600 * hh + 60 * mm + ss);
    printf("Time to midnight: %02d:%02d:%02d\n",
            to_m / 3600, (to_m / 60) % 60, to_m % 60);
}
