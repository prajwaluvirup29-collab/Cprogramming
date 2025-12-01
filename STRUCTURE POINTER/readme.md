

# 📘 Structure Pointer in C

### *Understanding How to Use Pointers with Structures*

This document explains the concept of **structure pointers** in the C programming language. It describes how pointers can be used to access and manipulate structure members efficiently.

---

## 📌 What Is a Structure Pointer?

A **structure pointer** is a pointer variable that stores the **address of a structure**.
Instead of accessing structure elements using a normal structure variable, we can access them using a pointer.

---

## 🧠 Why Use Structure Pointers?

Structure pointers are commonly used because:

* They allow **dynamic memory allocation** using `malloc()`
* They reduce memory consumption (no copying of structure objects)
* They help in writing modular programs (useful in functions)
* They allow accessing structure members using the `->` operator

---

## 👉 Accessing Members with Structure Pointer

When using a structure pointer:

* The `.` operator cannot be used
* Instead, we use the **arrow operator** `->`
  Example: `ptr->roll`, `ptr->name`, etc.

---

## 📌 Key Concepts Covered

This README covers:

* Declaring a structure
* Creating a structure pointer
* Assigning structure address to pointer
* Accessing members with `->`
* Understanding the difference between `.` and `->`
* Why structure pointers are useful in functions and dynamic memory allocation

---

## 📝 Use Cases

Structure pointers are widely used in:

* Linked lists
* Trees
* Queues and stacks
* File handling structures
* Dynamic student/employee records
* Embedded systems and microcontroller coding

---

## 🏁 How to Compile & Run (General Instructions)

If your C program is saved as `struct_pointer.c`:

```sh
gcc struct_pointer.c -o struct_pointer
./struct_pointer

