# Simple Calculator in C (Pass-by-Value)

This project is a **simple calculator program written in C** using the **pass-by-value** method. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

## 📌 Features

* Addition
* Subtraction
* Multiplication
* Division
* Input validation for division by zero
* Clean and simple function-based structure

---

## 📂 Code Overview

The program uses four separate functions:

* `add(int a, int b)`
* `subtract(int a, int b)`
* `multiply(int a, int b)`
* `divide(int a, int b)`

Each function receives values directly (pass-by-value) and returns the result.

---

## 🧠 How Pass-by-Value Works

In C, **function arguments are copied** to local parameters. This means:

* Original variables in `main()` stay unchanged.
* Functions work on their own copies of the data.

Example:

```c
add(num1, num2);
```

`num1` and `num2` are copied into function parameters `a` and `b`.

---

## ▶️ How to Compile and Run

### **Using GCC:**

```bash
gcc calculator.c -o calculator
./calculator
```

### **Using Windows (MinGW):**

```bash
gcc calculator.c -o calculator.exe
calculator.exe
```

---

## 💻 Sample Output

```
Enter two numbers: 10 5
--- Simple Calculator ---
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice: 1
Result = 15
```

---

## 📜 Program Code

```c
#include <stdio.h>

// Function prototypes (pass-by-value)
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--- Simple Calculator ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result = %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result = %d\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f\n", divide(num1, num2));
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Functions (Pass-by-value)
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
```

---

## 📘 Author

Created by **Prajwal Virupannavar**.

If you want a version for *pass-by-reference*, *loop-based calculator*, or *header-file structure*, feel free to ask!
