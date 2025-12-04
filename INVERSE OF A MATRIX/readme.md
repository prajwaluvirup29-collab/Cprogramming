
# 📄 **README.md**

```
# Inverse of a Matrix – C Program

This program computes the **inverse of any square matrix (n × n)** using the  
**Gauss–Jordan elimination method**. The inverse exists only if the matrix is **non-singular** (det ≠ 0).

---

## 🔢 Features
- Works for any **n × n** square matrix  
- Uses **elementary row operations**  
- Automatically:
  - Swaps rows when diagonal element is zero  
  - Converts matrix into **Reduced Row Echelon Form (RREF)**  
- Produces the **inverse matrix** if it exists

---

## 📥 Input
- Enter matrix order `n`
- Enter all elements of the `n × n` matrix

---

## 📤 Output
- Inverse matrix printed with 3-decimal precision  
- Displays message if matrix is **singular** (non-invertible)

---

## 🧮 Method Used
The Gauss–Jordan method transforms:

```

[A | I]  →  [I | A⁻¹]

```

Steps:
1. Form augmented matrix `[A | I]`
2. Make diagonal elements 1  
3. Make all other elements in column zero  
4. Right half becomes inverse matrix

---

## 📝 Example

### Input
```

n = 2
1 2
3 4

```

### Output
```

Inverse of the matrix:
-2.000 1.000
1.500 -0.500

```

---

## ❗ Notes
- Only works for **square matrices**  
- If determinant is zero → inverse does **not** exist  
- Floating-point operations used (precision up to 3 decimals)

---

## ✅ Suitable For
- Linear algebra lab
- Matrix operations assignment
- Engineering mathematics practice
