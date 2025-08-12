#include<stdio.h>
int main() {
int a[10],n,target,i,count=0;
printf("enter n value: ");
scanf("%d", &n);
printf("enter array values: ");
for(i=0;i<n;i++)
    scanf("%d", &a[i]);
printf("enter target element: ");
scanf("%d", &target);
for(i=0;i<n;i++){
    if(a[i]==target)
    {

    printf("the target element is present in an array at %d index", i);
    count++;
    break;
    }
}
if(count==0)
    printf("The target not found or search is unsuccessful");
else
    printf("search successful");
return 0;
}











