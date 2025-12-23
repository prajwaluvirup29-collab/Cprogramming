#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Left rotation by 1 */
    int first = arr[0];
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    printf("Array after left rotation by 1:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /* Right rotation by 1 */
    int last = arr[n - 1];
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("\nArray after right rotation by 1:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
