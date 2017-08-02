function foo {
    echo "Foo"
}

myargs() {
    cnt=1
    for arg; do
        echo "$cnt) $arg"
        let "cnt++"
    done
}
