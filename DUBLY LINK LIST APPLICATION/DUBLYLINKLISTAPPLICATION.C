#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Doubly linked list node
struct NODE {
    char song[50];
    struct NODE *prev;
    struct NODE *next;
};

// Create a new song node
struct NODE* createNode(char songName[]) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    strcpy(newNode->song, songName);
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

// Insert song at end of playlist
struct NODE* insertEnd(struct NODE *head, char songName[]) {
    struct NODE *newNode = createNode(songName);

    if (head == NULL) {
        return newNode;   // First song
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Display playlist (forward)
void displayForward(struct NODE *head) {
    struct NODE *temp = head;

    printf("\n🎶 Playlist (Forward):\n");
    while (temp != NULL) {
        printf("🎵 %s <-> ", temp->song);
        temp = temp->next;
    }
    printf("END\n");
}

// Move to next song
struct NODE* nextSong(struct NODE *current) {
    if (current->next != NULL) {
        return current->next;
    }
    printf("Already at last song!\n");
    return current;
}

// Move to previous song
struct NODE* prevSong(struct NODE *current) {
    if (current->prev != NULL) {
        return current->prev;
    }
    printf("Already at first song!\n");
    return current;
}

// Change current song name
void changeSong(struct NODE *current) {
    char newSong[50];

    printf("Enter new song name: ");
    fgets(newSong, sizeof(newSong), stdin);
    newSong[strcspn(newSong, "\n")] = '\0';

    strcpy(current->song, newSong);
    printf("Song updated successfully!\n");
}

// Main function
int main() {
    struct NODE *head = NULL;
    struct NODE *current = NULL;
    int n, i, choice;
    char songName[50];

    printf("How many songs? ");
    scanf("%d", &n);
    getchar();  // clear newline

    for (i = 0; i < n; i++) {
        printf("Enter song %d name: ", i + 1);
        fgets(songName, sizeof(songName), stdin);
        songName[strcspn(songName, "\n")] = '\0';
        head = insertEnd(head, songName);
    }

    current = head;   // start from first song

    do {
        printf("\n🎧 Now Playing: %s\n", current->song);
        printf("\n1. Next Song");
        printf("\n2. Previous Song");
        printf("\n3. Change Current Song");
        printf("\n4. Show Playlist");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                current = nextSong(current);
                break;

            case 2:
                current = prevSong(current);
                break;

            case 3:
                changeSong(current);
                break;

            case 4:
                displayForward(head);
                break;

            case 0:
                printf("Exiting playlist...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}