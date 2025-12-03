

# 📘 Matrix Division Program (C Programming)

This program performs **element-wise division** of two square matrices of sizes:

* **1 × 1**
* **2 × 2**
* **3 × 3**

Matrix division is not defined mathematically like multiplication, so this program divides each element of Matrix A by the corresponding element of Matrix B:

```
Div[i][j] = A[i][j] / B[i][j]
```

---

## ✅ Features

* Supports **1×1**, **2×2**, and **3×3** matrices
* Accepts user input for:

  * Matrix A
  * Matrix B
* Performs safe division with a check for **division by zero**
* Displays output in a neat matrix format

---

## ⚠️ Important Note

Matrix B **must not contain any zero** values.
If any element in B is zero, division cannot be performed.

The program automatically detects this and shows an error message.

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
Resultant Matrix (A ÷ B):
```

followed by the element-wise division result up to **2 decimal places**.

---

## 📌 Example (2×2)

**Input**

```
Matrix size: 2

Matrix A:
10 20
30 40

Matrix B:
2 4
5 8
```

**Output**

```
Resultant Matrix (A ÷ B):
5.00 5.00
6.00 5.00
```

---

## 🛠 Requirements

* C compiler (GCC, Clang, Turbo C, etc.)
* Basic understanding of arrays and loops
* Knowledge of floating-point division


