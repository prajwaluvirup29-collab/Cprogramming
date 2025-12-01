
# 📘 Find a Subarray Inside an Array (Integer Version)

## 📌 Overview

This project demonstrates how to **find a subarray inside a larger integer array** using a simple comparison method.

You provide:

* A **main array**
* A **subarray**

The program checks whether the subarray exists inside the main array.

---

## 🧠 Concept

The logic used:

1. Read the **main array size** and its elements.
2. Read the **subarray size** and its elements.
3. Loop through the main array and compare each segment with the subarray.
4. If all elements match, the subarray is found.
5. If no match is found, the subarray does not exist.

---

## 🔍 Key Idea

A subarray is considered found when:

```
main[i] == sub[0]
main[i+1] == sub[1]
main[i+2] == sub[2]
...
```

All elements of the subarray must match **in sequence**.

---

## 📝 Input Example

Main array:
`10 20 30 40 50 60`

Subarray:
`30 40`

---

## ✅ Output Example

```
Subarray found at position 2
```

(Meaning it begins at index 2 of the main array.)

---

## 📂 What You Learn

* How to compare integer sequences
* How to search inside arrays
* How nested loops work
* How simple pattern matching works in C

