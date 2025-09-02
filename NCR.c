#include <stdio.h>
unsigned long long nCr(int n, int r) {
 if (r > n) return 0;
 if (r > n - r) r = n - r;
 unsigned long long result = 1;
 for (int i = 1; i <= r; i++) {
 result = result * (n - r + i) / i;
 }
 return result;
}
int main() {
 int n, r;
 printf("Enter value for n: ");
 scanf("%d", &n);
 printf("Enter value for r: ");
 scanf("%d", &r);
 unsigned long long result = nCr(n, r);
 if (result == 0 && r > n) {
 printf("r cannot be greater than n.\n");
 } else {
 printf("NCR(%d, %d) = %llu\n", n, r, result);
 }
 return 0;
}
