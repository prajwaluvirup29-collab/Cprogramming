#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    struct Student* next;
};

struct Student* head = NULL;

void addStudent(int id, char name[]) {
    struct Student* temp = malloc(sizeof(struct Student));
    temp->id = id;
    strcpy(temp->name, name);
    temp->next = head;
    head = temp;
}

void display() {
    struct Student* temp = head;
    while (temp) {
        printf("ID:%d Name:%s\n", temp->id, temp->name);
        temp = temp->next;
    }
}

int main() {
    addStudent(1, "Alice");
    addStudent(2, "Bob");

    display();

    return 0;
}