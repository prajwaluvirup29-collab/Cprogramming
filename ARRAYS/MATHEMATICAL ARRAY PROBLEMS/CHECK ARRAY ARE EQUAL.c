#include <stdio.h>

int main() {
    int n, i, equal = 1;
    int a[100], b[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            equal = 0;
            break;
        }
    }

    if (equal)
        printf("Arrays are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}
