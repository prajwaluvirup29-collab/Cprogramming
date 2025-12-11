
**“Find the Maximum and Minimum Element in an Array”** — clean and simple:

---

# **Find Maximum and Minimum Element in an Array**

## **Objective**

Write a C program to input elements into an array and find the **largest (maximum)** and **smallest (minimum)** value present in that array.

---

## **Logic Used**

1. Read `n` (size of array).
2. Take `n` elements as input into the array.
3. Assume the first element `a[0]` is both **max** and **min**.
4. Traverse the array:

   * If `a[i] > max` → update `max`
   * If `a[i] < min` → update `min`
5. Print the result.



## **Sample Output**

```
Enter size of array: 5
Enter 5 elements:
10 3 25 -4 18
Maximum = 25
Minimum = -4

