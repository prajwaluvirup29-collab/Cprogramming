Jagged Arrays Using Pointers


# Jagged Arrays in C

## Aim
To demonstrate the creation and use of jagged arrays using pointers in C.

## Description
A jagged array is an array of arrays where each row can have a different number of columns. In C, jagged arrays are implemented using an array of pointers. Each pointer points to a dynamically allocated memory block for that row. This allows uneven rows and saves memory when row sizes vary.

## Key Concepts
- Array of pointers: `int *arr[rows];`  
- Dynamic allocation for each row using `malloc()`  
- Access elements using `arr[i][j]`

## Example

arr[0] = (int *)malloc(3 * sizeof(int));
arr[1] = (int *)malloc(5 * sizeof(int));
