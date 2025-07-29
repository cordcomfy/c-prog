//write a c program to calculate the salary of an employee, given basic pay, HRA - 10% of basic pay, TA - 5% of basic pay.

#include <stdio.h>
int main() {
    float basicPay, hra, ta, totalSalary;
    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basicPay);
    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    totalSalary = basicPay + hra + ta;
    printf("Basic Pay: %.2f\n", basicPay);
    printf("HRA (10%% of Basic Pay): %.2f\n", hra);
    printf("TA (5%% of Basic Pay): %.2f\n", ta);
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}
