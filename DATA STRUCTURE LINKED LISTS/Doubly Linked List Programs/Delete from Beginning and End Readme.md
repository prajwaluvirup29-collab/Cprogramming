# Delete from Beginning and End in Doubly Linked List

## 📌 Description
This program deletes nodes from:

- Beginning
- End

Memory is freed properly to avoid memory leaks.

---

## 🚀 Features
- Handles single-node list
- Updates head correctly
- Proper memory deallocation

---

## 🧠 Algorithm

### Delete Beginning
1. Store head in temp
2. Move head to next
3. Update prev pointer
4. Free temp

### Delete End
1. Traverse to last node
2. Update previous node next pointer
3. Free last node

