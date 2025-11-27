#include <stdio.h>

// Function prototype declaration
int addTwoNumbers(int firstNumber, int secondNumber);

int main(void) {
    int number1, number2, sum;
    printf("Addition Program\n");
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Call function to add numbers
    sum = addTwoNumbers(number1, number2);

    // Display result
    printf("Sum of %d and %d is: %d\n", number1, number2, sum);

    return 0; // Exit status
}

// Function definition
int addTwoNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}