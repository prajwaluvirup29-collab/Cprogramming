

# 📘 Matrix Addition Program (C Programming)

This program performs **addition of two square matrices** of sizes:

* **1 × 1**
* **2 × 2**
* **3 × 3**

The user selects the desired matrix size, enters the values of both matrices, and the program outputs the **sum matrix**.

---

## ✅ Features

* Supports **three matrix sizes** (1×1, 2×2, 3×3)
* Allows user input for:

  * Matrix size
  * Elements of Matrix A
  * Elements of Matrix B
* Performs element-wise addition:

  ```
  Sum[i][j] = A[i][j] + B[i][j]
  ```
* Displays the resulting matrix in proper format

---

## 📥 Input Format

1. Enter matrix size:

   ```
   1 for 1x1  
   2 for 2x2  
   3 for 3x3
   ```

2. Enter the elements of **Matrix A**

3. Enter the elements of **Matrix B**

---

## 📤 Output

The program displays:

```
Resultant Matrix (A + B):
```

followed by the sum of the two matrices.

---

## 📌 Example (2×2)

**Input:**

```
Matrix size: 2

Matrix A:
1 2
3 4

Matrix B:
5 6
7 8
```

**Output:**

```
Resultant Matrix (A + B):
6 8
10 12
```

---

## 🛠 Requirements

* C compiler (GCC, Clang, Turbo C, etc.)
* Basic knowledge of arrays and loops
