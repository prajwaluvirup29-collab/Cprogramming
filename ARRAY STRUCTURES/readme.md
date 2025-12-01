

# 📘 Array of Structures in C

### Understanding structure arrays and calculating their size

This document explains the basic idea behind creating and using an **array of structures** in C, along with how to determine the **size of a structure** and the **size of the entire array** stored in memory.

---

## 📂 Overview

A structure in C allows you to combine different data types under one grouped name. When you create an **array of structures**, each element of that array is one complete structure.

For example, if a structure contains:

* an integer
* a string
* a float

and you create an array of three such structures, you now have three grouped sets of those fields stored sequentially in memory.

---

## 📌 What this program (not shown here) performs

Even though the actual code isn't included, the flow is:

### 1. Define a structure

A custom data type is defined, typically containing fields like roll number, name, and marks.

### 2. Create an array of structures

For example, an array of three students.

### 3. Input details

The program takes user input for each element in the structure array.

### 4. Display details

Everything the user entered is printed back on screen.

### 5. Show memory usage

The program calculates:

* **Size of one structure** using `sizeof(structName)`
* **Size of the whole array** using `sizeof(arrayName)`
* **Number of elements** using `sizeof(array)/sizeof(array[0])`

This helps you understand memory allocation in C and how structures occupy space.

---

## 🧮 Key Concepts Explained

### ● Structure Size

The size depends on:

* the sum of all member sizes
* padding added by the compiler for memory alignment

### ● Array Size

The memory for the entire structure array is just:
**size of one structure × number of elements**

### ● Number of Items

You can find how many structures exist in the array even if you don’t manually count them.

---

## 🏁 Usage

You can compile and run the program using any standard C compiler. It will prompt for inputs, show the stored data, and print memory sizes.

