#include <stdio.h>
int lcm(int a, int b, int multiple) {
 if (multiple % a == 0 && multiple % b == 0)
 return multiple;
 return lcm(a, b, multiple + 1);
}
int main() {
 int a, b;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 int start = (a > b) ? a : b;
 printf("LCM of %d and %d is %d\n", a, b, lcm(a, b, start));
 return 0;
}
