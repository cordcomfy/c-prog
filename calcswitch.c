#include <stdio.h>
int main() {
int a, b;
char op;
printf("Enter operator (+, -, *, /, %%): ");
scanf(" %c", &op);
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
switch(op) {
case '+':
    printf("%d + %d = %d\n", a, b, a + b);
break;
case '-':
    printf("%d - %d = %d\n", a, b, a - b);
break;
case '*':
    printf("%d * %d = %d\n", a, b, a * b);
break;
case '/':
    if(b != 0)
printf("%d / %d = %d\n", a, b, a / b);
else
    printf("Error has occured in division\n");
break;
case '||':
    if(b != 0)
printf("%d %% %d = %d\n", a, b, a%b);
else
    printf("Error has occured in modulus division\n");
break;

default:
    printf("invalid input");
}
return 0;
}
