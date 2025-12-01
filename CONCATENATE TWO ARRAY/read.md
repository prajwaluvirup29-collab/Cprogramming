
## C Concepts: Structure Pointer & Array Concatenation

---

## ### 📌 1. Structure Pointer in C

A **structure pointer** in C is a pointer that stores the address of a structure variable.
It allows:

* Accessing structure members using the `->` operator
* Efficient passing of structures to functions (only address is passed, not full structure)
* Dynamic memory allocation of structures

### ✔ Advantages

* Saves memory
* Faster access
* Required when working with linked lists, trees, dynamic structures

### ✔ How it works

* A structure variable is created
* A pointer is assigned the address of the structure
* Members are accessed using:

  ```
  ptr->member
  ```

---

## ### 📌 2. Concatenation of Two Arrays in C

Array concatenation means **joining two arrays into one final array**.

Example idea (no code):

* Array A has `m` elements
* Array B has `n` elements
* A new array C of size `m + n` is created
* First copy all elements of A
* Then append all elements of B

### ✔ Use Cases

* Merging datasets
* Combining lists
* Joining sensor readings, numeric arrays, strings (character arrays)

### ✔ Important Notes

* Result array must have enough size
* Works for both integer and character arrays
* Character array concatenation is similar to string concatenation

---

## ### 📂 Summary

| Topic                   | Description                                               |
| ----------------------- | --------------------------------------------------------- |
| **Structure Pointer**   | Pointer used to access structure members using `->`       |
| **Why use it?**         | Faster, memory-efficient, required for dynamic structures |
| **Array Concatenation** | Joining two arrays into one larger array                  |
| **Steps**               | Create new array → copy first array → append second array |


