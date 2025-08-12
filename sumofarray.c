#include<stdio.h>
int main()
{
int a[10],n,i,sum=0;
printf("enter n value: ");
scanf("%d",&n);
printf("\n enter array values: ");
for(i=0;i<n;i++)
    scanf("%d", &a[i]);
for(i = 0; i<n;i++)
{
    sum = sum+a[i];
}
printf("\n The sum of given array elements is %d", sum);
}
