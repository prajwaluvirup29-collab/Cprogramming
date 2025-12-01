#include <stdio.h>

int main() {
    int arr[50], rev[50];
    int n, i;

    // Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse and save into another array
    for (i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }

    // Display reversed array
    printf("\nReversed Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
