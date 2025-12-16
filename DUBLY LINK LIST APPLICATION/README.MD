
# 🎵 Music Playlist Using Doubly Linked List in C

## 📌 Description
This program demonstrates the implementation of a **Doubly Linked List** in C to create a simple **music playlist system**.  
Each node represents a song, and the playlist allows navigation **forward and backward**, similar to a real music player.

---

## 🧠 Concepts Used
- Doubly Linked List
- Dynamic Memory Allocation (`malloc`)
- Structures in C
- String handling (`strcpy`, `fgets`)
- Menu-driven program

---

## ⚙️ Features
- Add songs to the playlist
- Move to the **next song**
- Move to the **previous song**
- Change the current song name
- Display the playlist in forward direction

---

## 🏗️ Data Structure
Each song is stored as a node with:
- `song` → song name
- `prev` → pointer to previous song
- `next` → pointer to next song

---

## ▶️ How to Run
1. Save the program as `playlist.c`
2. Compile the program:
   ```bash
   gcc playlist.c -o playlist
````

3. Run the executable:

   ```bash
   ./playlist
   ```

---

## 📋 Menu Options

```
1. Next Song
2. Previous Song
3. Change Current Song
4. Show Playlist
0. Exit
```

---

## ✅ Sample Output

```
🎧 Now Playing: Song Name

🎶 Playlist (Forward):
🎵 Song1 <-> 🎵 Song2 <-> 🎵 Song3 <-> END
```

---

## 📚 Applications

* Music player navigation
* Browser history (forward/back)
* Undo/redo operations


