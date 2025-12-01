#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i, k = 0;

    // Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Read first array elements
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Read size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Read second array elements
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Concatenate arrays
    for (i = 0; i < n1; i++)
        arr3[k++] = arr1[i];

    for (i = 0; i < n2; i++)
        arr3[k++] = arr2[i];

    // Display concatenated array
    printf("\nConcatenated Array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", arr3[i]);

    return 0;
}
