#include <stdio.h>
int reverseNumber(int n, int rev) {
 if (n == 0)
 return rev;
 return reverseNumber(n / 10, rev * 10 + n % 10);
}
int isPalindrome(int n)
 return n == reverseNumber(n, 0);
}
int main() {
 int n;
 printf("Enter a number: ");
 scanf("%d", &n);
 if (isPalindrome(n))
 printf("%d is a palindrome.\n", n);
 else
 printf("%d is not a palindrome.\n", n);
 return 0;
}
