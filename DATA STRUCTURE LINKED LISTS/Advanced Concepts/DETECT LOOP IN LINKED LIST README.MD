# Detect a Loop in a Linked List (Floyd’s Cycle Detection)

## Aim
To detect whether a loop exists in a singly linked list.

## Algorithm
1. Initialize two pointers: slow and fast.
2. Move slow by one node and fast by two nodes.
3. If slow and fast meet, a loop exists.
4. If fast reaches NULL, no loop exists.

## Output
Displays whether a loop is detected or not.

## Time Complexity
O(n)
