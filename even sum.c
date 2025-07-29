// write a c program to print count of even number from 1 to 200 and print the sum

#include <stdio.h>
int main() {
    int count = 200 / 2;
    int sum = count * (2 + 200) / 2;
    printf("Count of even numbers from 1 to 200: %d\n", count);
    printf("Sum of even numbers from 1 to 200: %d\n", sum);
    return 0;
}
