#include <stdio.h>
int main() {
    int a[10], n, target, i, count = 0;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("\nEnter array values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter target element: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(a[i] == target) {
            printf("The target element is present in the array at position %d\n", i);
            count++;
        }
    }
    if(count == 0)
        printf("The target element is not found in the array\n");
    return 0;
}
