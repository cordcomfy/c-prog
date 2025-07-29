#include <stdio.h>
int main() {
float income;
printf("enter your income: ");
scanf("%f", &income);
if (income <= 150000){
    printf("no tax is paid");
}
else if(income > 150000 && income < 300000){
    printf("pay 10% tax");
}
else if(income > 300000 && income < 500000){
    printf("pay 20% tax");
}
else{
    printf("pay 30% tax");
}
return 0;
}
