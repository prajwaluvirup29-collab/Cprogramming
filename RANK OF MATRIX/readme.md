

# **Rank of a Matrix – C Program**

This program computes the **rank of any m×n matrix** using the **Gaussian elimination method (row-reduction)**.
The rank represents the number of **non-zero rows** in the row-echelon form of the matrix.

---

## **📌 Features**

* Accepts matrix of **any size (m × n)**
* Performs **row operations**:

  * Row swapping
  * Row scaling
  * Row elimination
* Converts to **Row Echelon Form (REF)**
* Counts non-zero rows to obtain **rank**

---

## **📥 Input**

* Number of rows (**m**)
* Number of columns (**n**)
* Matrix elements

---

## **📤 Output**

* The **rank of the matrix**

---

## **🧮 Concept Used**

Rank = Number of **linearly independent rows**
Steps:

1. Find a pivot in each column
2. Make all elements below the pivot zero
3. Swap rows when pivot is zero
4. Count rows that are not completely zero


## **📝 Example**

### Input:

```
m = 3, n = 3
1 2 3
2 4 6
1 1 1
```

### Output:

```
Rank of the matrix = 2
```

---

## **📎 Notes**

* Works for **non-square** matrices
* Rank ≤ min(m, n)
* Handles row swapping automatically

---

If you want, I can also generate:
✅ PDF
✅ PPT
✅ Diagram / LaTeX format
Just tell me!
