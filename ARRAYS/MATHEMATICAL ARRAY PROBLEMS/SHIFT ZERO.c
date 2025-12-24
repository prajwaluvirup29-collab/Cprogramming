#include <stdio.h>

int main() {
    int n, i, count = 0;
    int arr[100], result[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Copy non-zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            result[count++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (count < n) {
        result[count++] = 0;
    }

    printf("Array after shifting zeros:\n");
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
