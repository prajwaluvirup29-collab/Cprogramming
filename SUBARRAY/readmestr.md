

# 📘 Find a Substring Inside a String

### *C Program – Substring Search (String Subarray)*

This program demonstrates how to **find a subarray inside an array** using **strings** in C.
In C terminology:

* **Main string** → the larger array
* **Substring** → the smaller array to be searched

The program checks whether the second string appears inside the first string.

---

## 🔍 **Concept**

The goal is to determine if:

```
main_string contains sub_string
```

To achieve this, we use standard string functions such as:

* `fgets()` → for reading strings safely
* `strstr()` → to find a substring inside another string

`strstr()` returns:

* The **starting address** of the matching substring
* `NULL` if the substring is *not* found

---

## 🧠 **How It Works**

1. User enters a **main string** (example: `"hello world"`).
2. User enters a **substring** (example: `"world"`).
3. Program checks if the substring exists.
4. Displays one of the following:

   * `"Substring found"`
   * `"Substring not found"`

---

## 🛠️ **Key Points**

* `gets()` is **not allowed** because it is unsafe and removed from C standards.
* Always use `fgets()` for reading strings safely.
* `strstr()` is the simplest method for substring search.

---

## ▶️ **Sample Input**

```
Enter main string: programming in c
Enter substring: c
```

## ✔️ **Sample Output**

```
Substring found!
```

---

## 📌 **Compilation and Execution**

```
gcc substring.c -o substring
./substring
