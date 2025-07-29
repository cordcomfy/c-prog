#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;
    int n;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time in years: ");
    scanf("%lf", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    rate = rate / 100;
    amount = principal * pow(1 + rate / n, n * time);
    compound_interest = amount - principal;
    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
