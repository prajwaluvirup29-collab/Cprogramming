# Sum of Diagonal and Anti-Diagonal Elements in C

## 📌 Description
In a square matrix, the main diagonal elements are those where row index equals column index.  
The anti-diagonal elements are those where the sum of row and column indices equals (n - 1).

This program calculates the sum of both diagonals.

## 🎯 Objective
- To find the sum of main diagonal elements
- To find the sum of anti-diagonal elements

## 🛠️ Algorithm
1. Read the order of the square matrix.
2. Read matrix elements.
3. Traverse the matrix:
   - Add element if `i == j` (main diagonal)
   - Add element if `i + j == n - 1` (anti-diagonal)
4. Display both sums.

## 💻 Program Features
- Works only for square matrices
- Simple nested loop approach
- Clear diagonal identification

## 📥 Input
- Order of square matrix
- Matrix elements

## 📤 Output
- Sum of main diagonal elements
- Sum of anti-diagonal elements

## 🧠 Concept Used
- 2D Arrays
- Matrix traversal
- Index-based conditions

## ⚠️ Note
- In odd-order matrices, the middle element is counted in both diagonals.

## 📌 Language Used
- C Programming
