#include <stdio.h>

int main() {
    int n, i;
    int a[100], b[100], diff[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    printf("Element-wise difference array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", diff[i]);

    return 0;
}
