#include <stdio.h>

int main() {
    int arr[100], n, flag = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}
