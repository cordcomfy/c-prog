#include <stdio.h>
int main() {
    int a[10], n, i;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("\nEnter array values: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nArray in reverse order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
