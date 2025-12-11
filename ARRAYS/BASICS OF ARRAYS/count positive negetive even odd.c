#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] > 0) pos++;
        if (a[i] < 0) neg++;

        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
