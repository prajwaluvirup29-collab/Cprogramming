#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;   // To handle large k values

    for(i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }

    printf("Array after rotation by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
