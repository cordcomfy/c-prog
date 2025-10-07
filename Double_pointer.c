#include<stdio.h>
void main() {
int var;
int *ptr;
int **pptr;
var = 200;
ptr = &var;
pptr = &ptr;
printf("va;ue of var: %d",var);
printf("\nvalue of *ptr: %d", *ptr);
printf("\nvalue of **pptr: %d", **pptr);
printf("\nvaddress of *ptr: %x", ptr);
printf("\naddress of **pptr: %x", pptr);
}
