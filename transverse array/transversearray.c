#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;   //pointer to traverse the array
    
    printf("Traversing array using pointer:\n");

    ptr = arr; // Initialize the pointer to the first element of the array

    //Traverse until the 5 elements print
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr++; // Increment pointer to the next element
    }

    return 0;
}