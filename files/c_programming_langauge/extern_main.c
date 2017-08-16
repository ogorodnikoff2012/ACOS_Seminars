#include <stdio.h>
extern int rnd_seed; /* This varaible is from */
int random();        /* another object file   */
int main() {
    rnd_seed = 1000;
    printf("%d\n", random());
}
