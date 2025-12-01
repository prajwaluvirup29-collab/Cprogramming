
# 📘 Number of Occurrences in a Character Array

### *README.md*

## 📌 **Overview**

This task focuses on counting how many times a specific character appears inside a character array (string). It is a basic string-processing operation commonly used in text analysis, validation, and pattern checking.

---

## 🎯 **Objective**

* Take a character array (string) as input.
* Take a single character to search for.
* Count how many times that character occurs.
* Display the total number of occurrences.

---

## 🧠 **Concepts Used**

### ✅ Character Array

A character array is used to store a string (sequence of characters ending with `'\0'`).

### ✅ Looping

A loop (`for` / `while`) is used to scan the entire character array.

### ✅ Conditional Checking

Each character is compared with the target character using:

```
if (arr[i] == search_char)
```

### ✅ Counter Variable

A counter increments each time the character matches.

---

## 📥 **Inputs Required**

1. A string (character array)
2. A character to check inside the string

---

## 📤 **Output**

* The total number of times the given character appears in the array.

---

## 📌 **Example Explanation**

If the array is:

```
"programming"
```

and the character to search is:

```
m
```

Then occurrences are:

```
2 times
```

---

## 🏁 **Use Cases**

* Text analysis
* Character frequency counting
* Data validation
* Search operations in strings
