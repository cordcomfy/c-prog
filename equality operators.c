// write a c program to implement equality operators

#include <stdio.h>
int main() {
    int a = 10;
    int b = 10;
    int c = 30;
    printf("a == b: %d\n", !(a - b));
    printf("a == c: %d\n", !(a - c));
    printf("a != b: %d\n", !!(a - b));
    printf("a != c: %d\n", !!(a - c));

    return 0;
}

