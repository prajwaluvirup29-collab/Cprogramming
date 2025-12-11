
**“Count Positive, Negative, Even, Odd Numbers in an Array”** — clean and simple:



# **Count Positive, Negative, Even, and Odd Numbers in an Array**

## **Objective**

Write a C program to read elements of an array and count how many of them are:

* **Positive numbers**
* **Negative numbers**
* **Even numbers**
* **Odd numbers**



## **Logic Used**

1. Read `n` (number of elements).
2. Input `n` elements into the array.
3. Initialize counters:

   * `pos = 0`, `neg = 0`, `even = 0`, `odd = 0`
4. Traverse the array:

   * If `a[i] > 0` → positive
   * If `a[i] < 0` → negative
   * If `a[i] % 2 == 0` → even
   * Else → odd
5. Print all counts.



## **Sample Output**

```
Enter size of array: 6
Enter 6 elements:
5 -2 0 7 -9 4
Positive numbers = 2
Negative numbers = 2
Even numbers = 3
Odd numbers = 3

