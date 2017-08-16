#include <stdio.h>
#ifdef DEBUG
#define LOG(...) printf("[%s:%d] ",\
        __FILE__, __LINE__); printf(\
        __VA_ARGS__ ); printf("\n");
#else
#define LOG(...)
#endif
int main() { /* If compiled as 'gcc -DDEBUG macros.c' */
    int sum = 0; /* then logging is enabled           */
    for (int i = 0; i < 100; ++i) {
        LOG("%d", i); sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
