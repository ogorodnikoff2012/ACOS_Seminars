#include <stdio.h>
int prev; /* This is global variable */
int random() {
    static int prev = 0; /* This variable is common */
                         /* for all random() calls  */
    return prev = (106 * prev + 1283) % 6075;
}
int main() {
    prev = 1000; /* This is global varaible         */
    printf("%d\n", random()); /* Output is 1283     */
    printf("%d\n", random()); /* Output is NOT 1283 */
    return 0;
}
