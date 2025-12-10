#include <stdio.h>

int main() {
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of elements = %d", sum);

    return 0;
}
