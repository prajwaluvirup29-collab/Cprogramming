# Insert at Beginning and End in Doubly Linked List

## 📌 Description
This program inserts nodes at:

- Beginning of the list
- End of the list

Pointers are updated correctly to maintain list integrity.

---

## 🚀 Features
- Insert at head
- Insert at tail
- Handles empty list condition

---

## 🧠 Algorithm

### Insert at Beginning
1. Create new node
2. Set new->next = head
3. Update head->prev
4. Move head to new node

### Insert at End
1. Traverse to last node
2. Attach new node
3. Update prev pointer

