# Prefix Sum Array in C

## Description
This program generates a prefix sum array where each element is the sum of all previous elements including itself.

## Algorithm
1. Read the array size and elements.
2. Set the first prefix element equal to the first array element.
3. Compute prefix sum using:
   prefix[i] = prefix[i-1] + arr[i]
4. Print the prefix sum array.

## Sample Output
Enter number of elements: 4  
Enter elements: 2 4 6 8  
Prefix Sum Array: 2 6 12 20

## Uses
- Used in range sum queries
- Improves time complexity in cumulative calculations
