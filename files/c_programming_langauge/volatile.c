int opt = 1;
void f() {
    start:
        if (opt == 1)
            goto start;
}

/* Compiler can optimize it like this: */

void f() {
    start:
        if (true)
            goto start;
}
