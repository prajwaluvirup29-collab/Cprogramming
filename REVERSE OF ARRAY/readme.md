

# 📘 Reverse an Array in C

### *Saving the reversed array and displaying it*

This project demonstrates a simple C program that:

* Reads elements of an integer array
* Reverses the array
* Stores the reversed elements into another array
* Displays both the original and reversed arrays

---

## 📂 **Concepts Used**

### ✅ **Arrays**

A collection of elements stored in contiguous memory locations.

### ✅ **Looping (for loop)**

Used to read input, reverse elements, and print arrays.

### ✅ **Reverse Logic**

To reverse the array, the last element is copied into the first position of another array.

---

## 🔍 **How Reversing Works**

If the array is:

```
Original: 10 20 30 40 50
```

The reversed array becomes:

```
Reversed: 50 40 30 20 10
```

This is done using:

* `reversed[i] = original[n - 1 - i]`

---

## 🧮 **Input Requirements**

* First, enter the **number of elements**
* Then enter each element one by one

Example:

```
Enter size: 5
Enter elements: 10 20 30 40 50
```

---

## 🏁 **Expected Output**

```
Original array: 10 20 30 40 50
Reversed array: 50 40 30 20 10
```

---

## ▶️ **How to Compile and Run**

```sh
gcc reverse_array.c -o reverse
./reverse
```

---

## 📌 **Notes**

* Array indexing starts from **0**
* The reversed array is stored in a **separate array**, not overwritten
* Works for any valid array size

