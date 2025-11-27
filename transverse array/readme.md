# README

This project demonstrates how to traverse an array using a pointer in the C programming language.

## Program Overview

The program:

* Creates an integer array of 5 elements
* Uses a pointer to traverse the array
* Prints each element by dereferencing the pointer
* Increments the pointer to move to the next element

## Source Code

```c
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
```

## How to Compile

```bash
gcc main.c -o traverse
```

## How to Run

```bash
./traverse
```

## Expected Output

```
Traversing array using pointer:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50
```
