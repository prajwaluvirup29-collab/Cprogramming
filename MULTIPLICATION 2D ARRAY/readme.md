

# 📘 Matrix Multiplication Program (C Programming)

This program performs **multiplication of two square matrices** of sizes:

* **1 × 1**
* **2 × 2**
* **3 × 3**

The user selects the matrix dimension, enters the elements of both matrices, and the program outputs the **product matrix (A × B)**.

---

## ✅ Features

* Supports **three matrix sizes**:

  * 1×1
  * 2×2
  * 3×3
* Accepts user input for:

  * Matrix A
  * Matrix B
* Performs matrix multiplication using the formula:

  ```
  Mul[i][j] = Σ(A[i][k] × B[k][j])
  ```
* Displays the final product matrix in clean tabular form.

---

## 📥 Input Format

1. Select matrix size:

   ```
   1 → 1x1
   2 → 2x2
   3 → 3x3
   ```

2. Enter the elements of **Matrix A**

3. Enter the elements of **Matrix B**

---

## 📤 Output Format

The program displays:

```
Resultant Matrix (A × B):
```

followed by the resulting multiplied matrix.

---

## 📌 Example (2×2)

**Input**

```
Matrix size: 2

Matrix A:
1 2
3 4

Matrix B:
5 6
7 8
```

**Output**

```
Resultant Matrix (A × B):
19 22
43 50
```

---

## 🛠 Requirements

* C compiler (GCC, Clang, Turbo C, etc.)
* Understanding of loops and basic matrix operations

