#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of elements at even indices = %d\n", evenSum);
    printf("Sum of elements at odd indices = %d\n", oddSum);

    return 0;
}
