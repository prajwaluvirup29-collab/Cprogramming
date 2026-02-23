#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song {
    char name[50];
    struct Song* next;
};

struct Song* head = NULL;

void addSong(char name[]) {
    struct Song* temp = malloc(sizeof(struct Song));
    strcpy(temp->name, name);

    if (!head) {
        head = temp;
        temp->next = head;
        return;
    }

    struct Song* ptr = head;
    while (ptr->next != head)
        ptr = ptr->next;

    ptr->next = temp;
    temp->next = head;
}

void play() {
    if (!head) return;

    struct Song* temp = head;
    do {
        printf("Playing: %s\n", temp->name);
        temp = temp->next;
    } while (temp != head);
}

int main() {
    addSong("Song A");
    addSong("Song B");
    addSong("Song C");

    play();

    return 0;
}