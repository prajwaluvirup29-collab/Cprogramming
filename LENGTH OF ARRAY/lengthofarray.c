#include <stdio.h>

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    char charArr[] = "PRAJWAL";  // String ends with '\0'

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int charSize = sizeof(charArr) - 1;   // exclude '\0'

    printf("Length of int array = %d\n", intSize);
    printf("Length of char array = %d\n", charSize);

    return 0;
}