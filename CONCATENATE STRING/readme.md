

## 📘 README.md — *Concatenate First & Last Name in C*

# **Concatenate First Name and Last Name in C**

This program demonstrates how to:

* Read a **first name** into one character array
* Read a **last name** into another character array
* Concatenate them with a **space** in between
* Store the full name in a **third array**
* Display the final combined name

---

## 📌 **Concepts Used**

### 1️⃣ Character Arrays

Used to store first name, last name, and full name.

### 2️⃣ String Functions

* `strcpy()` → Copy first name to full name
* `strcat()` → Add space and last name
* `strlen()` → (Optional) to check string length

### 3️⃣ String Concatenation

Joining two strings with a space in between:

```
fullName = firstName + " " + lastName
```

---

## 📂 **Program Workflow**

1. User enters first name
2. User enters last name
3. The program copies the first name into a new array
4. Adds a space
5. Appends the last name
6. Displays the full name

---

## 🧪 **Example**

**Input:**

```
Enter first name: Prajwal
Enter last name: Virupannavar
```

**Output:**

```
Full Name: Prajwal Virupannavar
```

---

## 🏁 **How to Run**

```bash
gcc fullname.c -o fullname
./fullname
```

---

## ✔ Notes

* Make sure the destination array (full name) is large enough.
* `scanf("%s", ...)` stops at spaces — ideal for names without spaces.
* For full names with spaces, `fgets()` can be used.


