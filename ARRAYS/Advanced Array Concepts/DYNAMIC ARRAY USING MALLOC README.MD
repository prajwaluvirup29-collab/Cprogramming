# Dynamic Arrays in C

## Aim
To demonstrate how to create and use dynamic arrays in C using `malloc()`.

## Description
Dynamic arrays allow allocation of memory at runtime. The size of the array is determined during execution, making it more flexible than static arrays. Memory is allocated in a single continuous block using `malloc()` and must be freed using `free()` to avoid memory leaks.

## Key Functions Used
- `malloc()` – allocate memory at runtime  
- `free()` – release allocated memory  
- `scanf()` / `printf()` – input/output

## Example
```c
int *arr;
arr = (int *)malloc(n * sizeof(int));
