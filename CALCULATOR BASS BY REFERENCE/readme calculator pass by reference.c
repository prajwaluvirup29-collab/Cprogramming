# Simple Calculator in C (Pass-by-Reference Using Pointers)

This is a simple calculator program written in **C** using the **pass-by-reference method**. The program performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

Pass-by-reference is implemented using **pointers**, allowing functions to modify values through memory addresses.

---

## 📌 Features

* Addition
* Subtraction
* Multiplication
* Division
* Prevents division-by-zero errors
* Uses pointer-based reference passing

---

## 📂 Code Overview

The program uses four functions that use **pointer parameters**:

* `add(int *a, int *b, int *result)`
* `subtract(int *a, int *b, int *result)`
* `multiply(int *a, int *b, int *result)`
* `divide(int *a, int *b, float *result)`

These functions modify output variables via pointers, achieving pass-by-reference behavior.

---

## 🧠 How Pass-by-Reference Works in C

C does not support true reference variables (like C++), but **pointers** allow functions to access and modify variables directly.

Example:

```c
add(&num1, &num2, &ans);
```

* `&num1` passes the address
* Inside the function, `*a` accesses the value
* Modifying `*result` updates the original variable

---

## ▶️ How to Compile and Run

### **GCC (Linux/Mac):**

```bash
gcc calculator_ref.c -o calculator
./calculator
```

### **Windows (MinGW):**

```bash
gcc calculator_ref.c -o calculator.exe
calculator.exe
```

---

## 💻 Sample Output

```
Enter two numbers: 10 5
--- Simple Calculator (Pass-by-Reference) ---
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice: 3
Result = 50
```

---

## 📜 Program Code

```c
#include <stdio.h>

// Function prototypes (pass-by-reference)
void add(int *a, int *b, int *result);
void subtract(int *a, int *b, int *result);
void multiply(int *a, int *b, int *result);
void divide(int *a, int *b, float *result);

int main() {
    int num1, num2, choice, ans;
    float divAns;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--- Simple Calculator (Pass-by-Reference) ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 2:
            subtract(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 3:
            multiply(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 4:
            if (num2 != 0) {
                divide(&num1, &num2, &divAns);
                printf("Result = %.2f\n", divAns);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Functions using pass-by-reference
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

void divide(int *a, int *b, float *result) {
    *result = (float)(*a) / (*b);
}
```

---

## 📘 Author

Created by **Prajwal Virupannavar**.

If you need a version:

* Without pointers (pass-by-value)
* Using global variables
* With loops or menus
* Or formatted for college report

Just tell me!
