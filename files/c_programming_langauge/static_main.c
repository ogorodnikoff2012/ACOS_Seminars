#include <stdio.h>
/* extern int x; Cannot access directly */
int get_x();
void set_x(int);
int main() {
    set_x(42);
    printf("%d\n", get_x());
}
