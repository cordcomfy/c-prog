#include <stdio.h>
int main() {
int a, b, c, d, e;
int sum;
float percentage;
printf("Enter the scores of 5 subjects: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
sum = a + b + c + d + e;
percentage = (sum / 500.0) * 100;
if (percentage > 75) {
    printf("Passed in Distinction\n");
}
else if (percentage >= 60) {
    printf("Passed in First Class\n");
}
else if (percentage >= 50) {
    printf("Passed in Second Class\n");
}
else if (percentage >= 40) {
    printf("Passed in Third Class\n");
}
else {
    printf("You have failed the examination\n");
}
return 0;
}
