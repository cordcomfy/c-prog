#include <stdio.h>
int main() {
char ch;
printf("Enter the char value: ");
scanf(" %c", &ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
    printf("The given character is a vowel.\n");
}
else {
    printf("The given character is not a vowel.\n");
}
return 0;
}
