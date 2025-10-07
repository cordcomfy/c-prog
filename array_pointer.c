#include<stdio.h>
void main() {
int a = 10, b = 20, c = 30;
int * arr[3];
arr[0] = &a;
arr[1] = &b;
arr[2] = &c;
printf("Value of a = %d\n", *arr[0]);
printf("value of b = %d\n", *arr[1]);
printf("value of c = %d\n", *arr[2]);
}
