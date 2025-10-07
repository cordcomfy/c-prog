#include<stdio.h>
void swap(int *x, int *y);
void main() {
int a=10;
int b=20;
swap(&a, &b);
printf("Value of A= %d\nValue of B=%d ", a, b);
swap(&a, &b);
printf("Value of A= %d\nValue of B=%d ", a, b);
}
void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}


