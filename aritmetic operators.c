// write a c program to perform arithmetic operators

#include <stdio.h>
int main(){
    int a = 20, b = 30, result;
    result = a + b;
    printf("the sum of a and b is %d\n", result);
    result = a - b;
    printf("the difference of a and b is %d\n", result);
    result = a * b;
    printf("the multiplication of a and b is %d\n", result);
    result = a / b;
    printf("the division of a and b is %d\n", result);
    result = a % b;
    printf("a %% b is %d\n", result);
    return 0;
}
