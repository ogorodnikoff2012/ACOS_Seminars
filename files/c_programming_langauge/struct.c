struct Foo {
    int bar, baz;
    char foobar;
};

typedef struct Foo Foo_t;

int main() {
    struct Foo f1;
    Foo_t f2;
    f1.bar = 42;
    f2 = f1;
    return 0;
}
