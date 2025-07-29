#include <stdio.h>
int main() {
char gender;
float salary, bonus = 0.0, total_salary;
printf("Enter the salary: ");
scanf("%f", &salary);
printf("Enter the gender (male/Female): ");
scanf(" %c", &gender);
if (gender == 'm') {
        bonus = 0.05f;
} else if (gender == 'f') {
        bonus = 0.0f;
} else {
    printf("Invalid gender input");
return 1;
}
if (salary < 10000) {
    bonus += 0.02f;
}
total_salary = salary + (salary * bonus);
printf("Total salary after bonus is: %.2f\n", total_salary);
return 0;
}
